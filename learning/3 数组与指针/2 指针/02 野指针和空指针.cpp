#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    // int r;
    // const int *p = &r;
    // cout << p << endl;
    // cout << &p << endl;
    // cout << r << endl;
    // cout << *p << endl;
    // cout << &r << endl;

    int *p = nullptr;
    cout << p << endl;

    return 0;
}