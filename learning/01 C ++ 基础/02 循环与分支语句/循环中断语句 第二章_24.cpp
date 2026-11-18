#include <iostream>
#include <string>
#include <windows.h>

using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    for (int i = 1; i <= 10; i ++) {

        if (i % 2 == 0) {
            continue;
        }

            cout << i << endl;

    }
    cout << endl;

    for (int j = 1; true; j ++) {
        cout << j << endl;
        if (j == 5) {
            break;
        }
    }

    return 0;
}