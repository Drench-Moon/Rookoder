#include <iostream>
#include <string>
#include <windows.h>


using namespace std;

int getmax (int a, int b)
{
    // int max = a;
    // if (b > max) {
    //     max = b;
    // }

    return a > b ? a : b;
}
int main()
{
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    /*
    * 函数的基本语法
    * 返回值类型 函数名称 (参数声明)
    * {
    *   函数主体结构
    *   返回值(如果函数返回值类型为void则无返回值)
    * }
    */
    int i, j;
    cin >> i >> j;
    int max = getmax(i,j);
    cout << max << endl;
    return 0;
}