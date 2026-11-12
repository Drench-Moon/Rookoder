#include <iostream>
#include <string>
#include <windows.h>


using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    int i = 1;
    conti :
    cout << i << " ";
    i ++;
    if (i <= 10) {
        goto conti;
    }
    cout << endl;
    return 0;
}