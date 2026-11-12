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

    vector<vector<int>> v(3, vector<int>(3, 1));                //声明一个元素是vector的vector数组（二维）

    for (auto &i : v) {                              //外层尽量用引用&，拷贝速度较慢，且不会改v数组本身
        for (auto &j : i) {                                    //只有两层都引用才能改元素，只有内层加或者只有外层加都是修改不同的拷贝
            cout << j << " ";
            j ^= 1;
        }
        cout << i[1] << endl;
    }


    return 0;
}