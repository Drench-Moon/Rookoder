//
// Created by Drench_Moon on 2026/10/23.
//
#include <iostream>
#include <vector>
#include <windows.h>
using namespace std;
int main () {
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    vector<int> v(4, 2);      //size = 4

    const unsigned int k = v.capacity();            //看当前能装多少个元素，通常大于size
    cout << k << endl;                              //v的容量

    v.reserve(4);                                 //capacity = 4, size = 4 不变
    cout << "v的容量是：" << v.capacity() << endl;                 //都是4
    cout << "v的大小（元素个数）是：" <<  v.size() << endl;        //都是4

    cout << endl;
    v.push_back(1);                               //size = 5
    cout << "增加size为：" << v.size() << endl;
    cout << "扩容的capacity是 " << v.capacity() << endl;                   //每次超出capacity都会自动扩容，一次性扩容够，一般是两倍，现在被扩容到8
    v.resize(7, 4);                            //size = 7, 超出的两个默认为0, 可以设置, 此处设置为4
    cout << "增加的元素是" <<  v[5]  << "和" << v[6] << '\n';

    cout << endl;
    v.reserve(6);                                //capacity至少是size，如果定义为小于size的数，这个操作会被忽略
    cout << v.capacity() << '\n';

    cout << '\n';
    v.resize(3);                           //把size设置为3，多出的部分会清除
    cout << v[0] << v[1] << v[2] << '\n';
    cout << v.size() << " " << v.capacity() << endl;

    v.shrink_to_fit();                             //把capacity缩小为size
    cout << v.capacity() << endl;
    int _ = 2;
    cout << _ << endl;
}