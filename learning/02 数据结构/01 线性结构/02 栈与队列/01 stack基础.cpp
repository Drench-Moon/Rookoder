//
// Created by Drench_Moon on 2026/10/25.
//
#include <iostream>
#include <string>
#include <windows.h>
#include <stack>
#include <vector>


//stack(栈)是后进先出，先进后出
//类似堆叠物品，需要拿取时最上面的最先被拿走


using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << s.top();                //取得最高栈的元素
    s.pop();                        //弹出最高栈的元素
    cout << endl;

    cout << s.top();
    cout << s.empty();
    cout << s.size() << endl;


    stack<vector<int>> q;
    q.emplace(3, 4);               //直接在容器内部构造
    q.push(vector<int>(3, 4));   //先建立一个新的容器再拷贝回来，两者在结果上等价
    for (int i = 0; i < 3; i ++) {
        cout << q.top()[i] << endl;
    }
    // stack<int> qi;
    // qi.emplace(3, 4);                 //这是不合法的，stack没有这样的构造函数

    return 0;
}