#include <iostream>
#include <string>
#include <windows.h>


using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    cout << "指针悬挂" << endl;
    int * p1 = new int ;
    *p1 = 10;
    int * p2 = p1;

    cout << *p1 << endl;
    delete p1;
    p1 = nullptr;
    p2 = nullptr;

    return 0;
}