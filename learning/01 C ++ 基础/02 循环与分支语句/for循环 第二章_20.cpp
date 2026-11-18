#include <iostream>
#include <string>
#include <windows.h>


using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    for (int i = 1; i <= 10; i++) {
        cout << i << endl;
    }

    int k =1;
    while (k <= 10) {
        cout << k << endl;
        k ++;
    }
    return 0;
}