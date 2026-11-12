#include <iostream>
#include <string>
#include <windows.h>


using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    int v[] {1,3,5,7,9};
    for (int i = 0; i < size(v); i ++) {          //也可以用：sizeof(v) / sizeof (v[0])
        cout << v[i] << endl;
    }
    cout << "高级形式" << endl;
    for (const int element : v) {
        cout << element << endl;
    }
    return 0;
}