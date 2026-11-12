#include <iostream>
#include <string>
#include <windows.h>


using std :: cout;
using std :: endl;
using std :: cin;
int main()
{
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    int v[2][3];
    for (int i = 0; i < sizeof(v) / sizeof(v[0]); i ++) {
        for (int j = 0; j < std::size(v[j]); j ++) {
            cin >> v[i][j];
        }
    }


    for (auto & m : v) {
        for (const int n : m) {
            cout << n << endl;
        }
    }
    return 0;
}