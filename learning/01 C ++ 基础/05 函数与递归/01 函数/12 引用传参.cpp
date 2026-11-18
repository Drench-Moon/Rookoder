#include <iostream>
#include <string>
#include <windows.h>

void function(int &a, int &b) {
    int tem = a;
    a = b;
    b = tem;
}
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    int a = 123;
    int b = 9;
    function(a, b);
    cout << a << " " << b << endl;
    return 0;
}