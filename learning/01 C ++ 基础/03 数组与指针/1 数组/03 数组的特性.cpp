#include <iostream>
#include <string>
#include <windows.h>


using namespace std;
int main() {
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    int v[5] {1,2,3,4,5};
    cout << v[0] <<endl;
    cout << sizeof(v) / sizeof(v[0])<<endl;
    return 0;
}