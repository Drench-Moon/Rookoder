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

    // "hello"
    char s[] = "hello";
    std :: cout << s[0] << std :: endl;
    std :: cout << s[1] << std :: endl;
    std :: cout << s[2] << std :: endl;
    std :: cout << s[3] << std :: endl;
    std :: cout << s[4] << std :: endl;
    std :: cout << s[5] << std :: endl;


    std :: cout << sizeof(s) << std :: endl;

    for (const char i :s) {
        cout << i;
    }
    return 0;
}