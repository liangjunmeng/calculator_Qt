#ifndef UTIL_H
#define UTIL_H

#include <stack>
#include <vector>
#include <string>

// 工具类
class Util {
public:
    Util() = delete; // 禁止实例化
    static bool isRight(const std::string& str, int pos); //判断用户输入是否合法
    static int getPriority(const char &code); // 获得符号优先级
    static bool isNumber(const std::string& str); // 判断字符串是否为合法数字
    // 判断在中缀表达式转后缀时，操作符是否能入符号栈
    static bool canGetInStack(const std::stack<std::string>& marks, std::string str);
    // 计算后缀表达式，并将结果存至result中
    static bool countPfExpr(std::vector<std::string> postfixExpression, double& result);
};

#endif
