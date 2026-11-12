#include <iostream>
#include <string>
#include <windows.h>


using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8
    /*
    bool A = true;
    int num = 0;
    while (A) {
        cout << "Welcome to While" << endl;
        num++;

        if (num >5 ) {
            A = false;
        }
    }b
    */
    int num = 1;
    while (num <= 10) {
        cout << "数据输出" << num << endl;
        num++;
    }
    return 0;
}