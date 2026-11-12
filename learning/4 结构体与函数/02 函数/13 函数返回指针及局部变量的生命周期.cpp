#include <iostream>
#include <string>
#include <windows.h>

int * func(int a, int b)
{
    int *sum = new int;          //需要手动申请一个空间
    * sum = a + b;
    return sum;                 //依赖于C++ 的静态内存管理，如果单纯定义一个局部变量宿sum，其作用域只在函数内部，函数执行完毕后，函数内部的所有东西全部被销毁，因此调用函数时，只能到一个悬挂指针
}

using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    int * add =  func(1,2);
    cout << add << endl;
    cout << *add << endl;
    delete add;

    return 0;
}