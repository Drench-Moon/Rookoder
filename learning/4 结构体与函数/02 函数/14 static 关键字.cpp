#include <iostream>
#include <string>
#include <windows.h>

//static修饰后，变成静态变量、02 函数......
//用static修饰后，可以把其生命周期延长到整个程序运行周期，例如：
int * add(int &a, int &b)
{
    static int sum;                    //如果不加static，那么函数结束后sum被清理，&sum是一个空地址，调用之后的suu是一个悬空指针（因为函数返回的是一个空地址）
    sum = a + b;                       //如果和static 声明的同时赋值，sum被锁定为第一次调用提供的值，也就是main函数里的3 + 4 结构体与函数 ，以后add(2 循环与分支语句, 3 数组与指针)也会输出7
    return &sum;
}

using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    int a = 3;
    int b = 4;
    int * suu = add (a ,b );
    cout << suu << endl;
    cout << *suu << endl;

    return 0;
}