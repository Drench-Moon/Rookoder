//
// Created by Drench_Moon on 2026/10/22.
//
#include <iostream>
#include <string>
#include <windows.h>
#include <vector>


using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    vector<int> v ={1, 2, 3};

    //Method 1
    for (int i = 0; i < v.size(); i ++) {
        cout << v[i] << " ";
    }
    cout << endl;

    //Method 2
    for (auto i : v) {
        cout << i << " ";
    }
    cout << endl;

    //Method 3
    for (auto &i : v) {                   //引用之后原数组被改变为2， 4， 6
        cout << i << " ";
        i *= 2;
        cout << i << " ";
    }
    cout << v[2] << endl;                     //如果上面没有引用符号&，这里输出的就是3，而不是6

    cout << endl;
    while (!v.empty()) {
        cout << v.at(v.size() - 1);
        cout << v.back() << " ";
        v.pop_back();
    }
    return 0;
}