//
// Created by Drench_Moon on 2026/10/25.
//
#include <iostream>
#include <string>
#include <windows.h>
#include <stack>
#include <vector>


using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    string str;
    cin >> str;             //获得字符串

    bool ok = true;
    stack<char> v;           //声明一个存储左括号的栈

    for (char c : str) {              //如果是左括号就入栈
        if (c == '(' || c == '[' || c == '{') {
            v.push(c);
        }
        else {
            if (v.empty()) {
                ok = false;
                break;
            }
            if (c == ')' && v.top() != '(' || c == ']' && v.top() != '['|| c == '}' && v.top() != '{') {
                ok = false;
                break;
            }
                v.pop();
        }
    }
    cout << (ok && v.empty() ? "YES" : "NO") << endl;
    return 0;
}