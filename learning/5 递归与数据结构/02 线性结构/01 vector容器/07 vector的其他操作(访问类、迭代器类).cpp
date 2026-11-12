//
// Created by Drench_Moon on 2026/10/23.
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

    //指向类
    vector<int> v (3);                       //指向vector数组的指针
    int *p = v.data();
    cout << *p << endl;


    //迭代器的遍历
    vector<int> v1 = {1, 2, 3, 4};
    for (auto i = v1.begin(); i != v1.end(); ++ i) {         //i的本质是一个迭代器，不是整型，也不是指针，但是类似指针，++ i可以把
        cout << *i << " ";                                  //类似指针，可以通过解引用获得元素
    }

    cout << endl;

    //反向迭代
    for (auto i = v1.rbegin(); i != v1.rend(); ++ i) {      //反向迭代的表示, 内部指针重载，++ i表示移动到指向上一个元素
        cout << *i << " ";
    }

    return 0;
}