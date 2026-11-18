#include <iostream>
#include <string>
#include <windows.h>


using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    int a, b;
    string C;
    cout << "请输入 整数 + 空格 + 运算符 + 空格 + 整数" << endl;
    cin >> a >> C >> b;
    if (C == "+") {
        cout << a + b << endl;
    }
    else if (C == "-") {
        cout << a - b << endl;
    }
    else if (C == "*") {
        cout << a * b << endl;
    }
    else if (C == "/") {
        cout << a / b << endl;
    }
    else if (C == "%") {
        cout << a % b << endl;
    }
    else
    {
        cout << "ERROR"  << endl;
    }

    return 0;
}