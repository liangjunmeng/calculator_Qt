#ifndef CALCULATORMANAGER_H
#define CALCULATORMANAGER_H

#include <string>
#include <vector>
#include <QWidget>

class CalculatorManager {
public:
    CalculatorManager();
    QString getInput(std::string str); // 录入字符串
    bool toInfixExpr(); // 将用户输入转换为中缀表达式进行存储
    bool toPostfixExpr(); // 将中缀表达式转换为后缀表达式
    void printInfixExpression(); // 打印中缀表达式
    void printPostfixExpression(); // 打印后缀表达式
    void clearAll(); // 清空数据成员
private:
    std::string input; // 用户输入字符串（符号形式）
    std::vector<std::string> infixExpression; // 用户输入字符串（中缀表达式形式）
    std::vector<std::string> postfixExpression; // 后缀表达式
    double result; // 计算结果
};

#endif
