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

    stack<int> s;
    for (auto i = 0; i < 5; i++) {
        s.push(i + 1);
    }

    while (!s.empty()) {
        cout << s.top();                         //反向输出，先进后出
        s.pop();                                 //边弹出边输出
    }
    return 0;
}