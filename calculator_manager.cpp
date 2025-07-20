#include "calculator_manager.h"
#include "util.h"
#include <vector>
#include <stack>
#include <iostream>

CalculatorManager::CalculatorManager() {
    input = "";
    infixExpression = {};
    postfixExpression = {};
    result = 0;
}

QString CalculatorManager::getInput(std::string str) {
    clearAll();
    input = str;
    if (input.empty()) {
        return "用户未输入！";
    }
    if (!toInfixExpr()) {
        return "用户输入非法！";
    }
    if (!toPostfixExpr()) {
        return "用户输入非法！";
    }
    if (!Util::countPfExpr(postfixExpression, result)) {
        return "用户输入非法！";
    }
    else {
        return QString::number(result);
    }
}

bool CalculatorManager::toInfixExpr() {
    std::string record;
    int i, j, pointNum, eNum;
    for (i = 0; i < (int)input.size(); i++) {
        // 非法输入
        if (!Util::isRight(input, i)) {
            return false;
        }
        // 避免-1、+1、+(1+1)、1+(+(1+1))被判断为非法字符
        if ((input[i] == '+' || input[i] == '-')) {
            if (i == 0 || input[i - 1] == '(') {
                infixExpression.push_back("0");
            }
        }
        record = "";
        // 记录数字，包括整数和小数（不包括负数），而是将符号和数字两部分分别存储
        if (std::isdigit(static_cast<unsigned char>(input[i]))) {
            pointNum = 0; // 小数点数量
            eNum = 0; // e的数量（科学计数法）
            record.push_back(input[i]);
            // 判断数字截至位置，同时查看是否是小数
            for (j = i + 1; j < (int)input.size(); j++) {
                if (!std::isdigit(static_cast<unsigned char>(input[j]))) {
                    if (input[j] != '.' && input[j]!='e' && input[j]!='E') {
                        i = j - 1; // for循环一轮结束后会自动对i进行自增
                        break;
                    }
                    else if(input[j] == '.'){
                        // 小数点过多或检索到最后一个字符才是小数点时，说明用户输入有问题，返回false
                        if (pointNum == 1 || j == (int)input.size() - 1) {
                            return false;
                        }
                        else {
                            record.push_back('.');
                            pointNum++;
                        }
                    }
                    else if(input[j] == 'e' || input[j] == 'E'){
                        // e过多或检索到最后一个字符才是e时，说明用户输入有问题，返回false
                        if (eNum == 1 || j == (int)input.size() - 1 ) {
                            return false;
                        }
                        else {
                            // 直接检索e后面的字符，不为数字或正负号则直接判为非法输入
                            if(input[j+1]!='+' && input[j+1]!='-' && (input[j+1] < '0' || input[j+1] > '9')){
                                return false;
                            }
                            else{
                                record.push_back(input[j]);
                                record.push_back(input[j+1]);
                                eNum++;
                                j++;
                            }
                        }
                    }
                }
                else {
                    record.push_back(input[j]);
                }
            }
            infixExpression.push_back(record);
            // 检索数字截止位置发现其是字符串最后一位时
            if (j == (int)input.size()) {
                break;
            }
        }
        else {
            infixExpression.push_back(std::string(1,input[i]));
        }
    }
    return true;
}

bool CalculatorManager::toPostfixExpr() {
    if (infixExpression.size() == 0) {
        return false;
    }
    std::stack<std::string> marks; // 符号栈
    for (int i = 0; i < (int)infixExpression.size(); i++) {
        // 如果是运算数，直接放入后缀表达式中
        if (Util::isNumber(infixExpression[i])) {
            postfixExpression.push_back(infixExpression[i]);
        }
        else if (infixExpression[i] == ")") {
            while (true) {
                // 缺少左括号
                if (marks.empty()) {
                    return false;
                }
                if (marks.top() == "(") {
                    marks.pop();
                    break;
                }
                else {
                    postfixExpression.push_back(marks.top());
                    marks.pop();
                }
            }
        }
        else {
            // 如果栈为空或待处理操作符优先级高于栈顶符号，直接入栈
            if (Util::canGetInStack(marks,infixExpression[i])) {
                marks.push(infixExpression[i]);
            }
            else {
                while (!Util::canGetInStack(marks, infixExpression[i])) {
                    postfixExpression.push_back(marks.top());
                    marks.pop();
                }
                marks.push(infixExpression[i]);
            }
        }
    }
    while (!marks.empty()) {
        postfixExpression.push_back(marks.top());
        marks.pop();
    }
    return true;
}

void CalculatorManager::printInfixExpression() {
    if (infixExpression.empty()) {
        return;
    }
    for (int i = 0; i < (int)infixExpression.size(); i++) {
        std::cout << infixExpression[i] << " ";
    }
    std::cout << std::endl;
}

void CalculatorManager::printPostfixExpression() {
    if (postfixExpression.empty()) {
        return;
    }
    for (int i = 0; i < (int)postfixExpression.size(); i++) {
        std::cout << postfixExpression[i] << " ";
    }
    std::cout << std::endl;
}

void CalculatorManager::clearAll() {
    input = "";
    infixExpression = {};
    postfixExpression = {};
    result = 0;
}

