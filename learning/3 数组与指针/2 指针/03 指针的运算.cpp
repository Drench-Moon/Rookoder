#include <iostream>
#include <windows.h>
using namespace std;
int main () {
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    // constexpr unsigned long long num = 10;
    // const unsigned long long *p = &num;
    // cout << p << endl;
    // p += 1 变量与常量及其运算;                                 //跳过四个字节（int变量的长度）
    // cout << p << endl;



    int v[]{1,4,7,2,0};
    int *vp = v;                         //v的地址默认为v[0]的地址
    //重新赋值：
    *(vp + 1) = 3;
    cout << v << endl;
    cout << "数组的第一个元素:" << *vp << "or" << v[0] << endl;
    cout << "数组的第二个元素:" << *(vp + 1) << "or" << v[1] << endl;     // *vp 取第二个元素，+1 变量与常量及其运算 表示跳过四个字节，int数组的地址差值就是4个字节，也就是刚好取到第二个元素


    return 0;
}