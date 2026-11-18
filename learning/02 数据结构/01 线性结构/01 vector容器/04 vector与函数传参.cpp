//
// Created by Drench_Moon on 2026/10/22.
//
#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
using namespace std;

//void func0(vector<int> v){}              //一般不用这种方法进行值传递，如果数组元素过多，拷贝速度会非常慢

void func(const vector<int> &v) {          //只读形式，不能修改
    for (auto &i : v) {
        cout << i << " ";
    }
}

void func2(vector<int> &v) {
    for (auto &i : v) {
        i *= 2;
        cout << i << " ";
    }
}
int main()
{
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    vector<int> v(6, 2);
    func(v);
    cout << endl;
    func2(v);
    return 0;
}