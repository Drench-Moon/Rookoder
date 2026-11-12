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

    vector<int> v;
    for (int i = 0; i < 5; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    v[1] = 0;

    v.pop_back();               //把最后一个5删掉

    cout << v.at(0) << " " << v.at(1) << endl;
    cout << v.front() << " " << v.back() << endl;
    cout << v.size() << " " << (v.empty()? "空" : "非空") << endl;
    return 0;
}