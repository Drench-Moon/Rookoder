#include <iostream>
#include <string>
#include <windows.h>


using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    int num = 1;
    int num2 = 0;
    while (num <= 100) {
        num2 += num;
        num++;
    }
    cout << num2 << endl;
    return 0;
}