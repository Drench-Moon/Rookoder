//
// Created by Drench_Moon on 2026/10/25.
//
#include <iostream>
#include <queue>
#include <string>
#include <windows.h>
#include <stack>
#include <vector>
#include <queue>


using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);                  //队列q现在是 [1, 2, 3, 4, 5], 1在队首, 5在队尾

    cout << q.front() << endl;    //输出第一个元素
    q.pop();                      //弹出第一个元素
    cout << q.back() << endl;     //输出最后一个元素

    cout << endl;
    cout << q.size();
    cout << q.empty() << endl;
    return 0;
}