#include "util.h"
#include <stack>
#include <regex>
#include <cmath>

bool Util::isRight(const std::string& str, int pos) {
    if ((str[pos] <= '9' && str[pos] >= '0') || str[pos] == '.' || str[pos] == 'e' || str[pos] == 'E') {
        // 避免(2)2被判断为正确值
        if (pos != 0) {
            return str[pos - 1] != ')';
        }
        else {
            return true;
        }
    }
    else if (str[pos] == '+' || str[pos] == '-') {
        return true;
    }
    else if (str[pos] == '*' || str[pos] == '/' || str[pos] == '%') {
        return true;
    }
    else if (str[pos] == '(' || str[pos] == ')') {
        return true;
    }
    else if (str[pos] == '^' || str[pos] == '!') {
        return true;
    }
    else {
        return false;
    }
}

int Util::getPriority(const char& code){
    switch (code)
    {
    case '(': return 0;
    case '+':
    case '-': return 1;
    case '*':
    case '/':
    case '%': return 2;
    case '^': return 3;
    case '!': return 4;
    default: return -1;
    }
}

bool Util::isNumber(const std::string& str){
    // 匹配规则
    std::regex pattern(R"(^[+-]?\d+(\.\d+)?([eE][+-]?\d+)?$)");
    return std::regex_match(str, pattern);
}

bool Util::canGetInStack(const std::stack<std::string>& marks, std::string str) {
    // 如果栈为空、操作符为左括号或操作符优先级高于栈顶符号，允许入栈
    if (marks.empty() || str == "(" || Util::getPriority(str[0]) > Util::getPriority(marks.top()[0])) {
        return true;
    }
    else {
        return false;
    }
}

bool Util::countPfExpr(std::vector<std::string> postfixExpression, double& result) {
    std::stack<double> countNum; // 便于计算的栈
    double num1 = 0, num2 = 0;
    for (int i = 0; i < (int)postfixExpression.size(); i++) {
        if (Util::isNumber(postfixExpression[i])) {
            // 将字符串转换为double类型的数字
            countNum.push(std::stod(postfixExpression[i]));
        }
        else {
            if (countNum.size() < 2 && postfixExpression[i] != "!") {
                return false;
            }
            num1 = countNum.top();
            countNum.pop();
            // 对于一元运算符"!"来说，只需要弹出栈的一个元素用于计算
            if(postfixExpression[i] != "!"){
                num2 = countNum.top();
                countNum.pop();
            }
            if (postfixExpression[i] == "+") {
                num2 += num1;
            }
            else if(postfixExpression[i] == "-") {
                num2 -= num1;
            }
            else if (postfixExpression[i] == "*") {
                num2 *= num1;
            }
            else if (postfixExpression[i] == "/") {
                if (num1 == 0) {
                    return false;
                }
                // 栈顶元素是除数
                num2 /= num1;
            }
            else if(postfixExpression[i] == "%"){
                if (num1 == 0) {
                    return false;
                }
                num2 = fmod(num2, num1);
            }
            else if(postfixExpression[i] == "^"){
                num2 = std::pow(num2,num1);
            }
            else if(postfixExpression[i] == "!"){
                // 判断被阶乘的是否是整数，否则报错
                if(!(std::fmod(num1, 1) == 0.0)){
                    return false;
                }
                int num22 = 1;
                for(int i = 1; i <= num1; i++){
                    num22 *= i;
                }
                num2 = num22;
            }
            countNum.push(num2);
        }
    }
    if (countNum.size() != 1) {
        return false;
    }
    result = countNum.top();
    return true;
}

