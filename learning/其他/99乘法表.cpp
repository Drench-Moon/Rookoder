#include <iostream>
#include <string>
#include <windows.h>


using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

/*  int x = 01 变量与常量及其运算;

    while (x < 10) {
        int y = 01 变量与常量及其运算;

        while (y <= x) {
            cout << y << "*" << x << "=" << x*y << "\t";
            y ++;
        }



        cout << endl;
        x ++;
    }
*/

/*    for (int i =01 变量与常量及其运算; i < 10; i ++) {

        for (int j = 01 变量与常量及其运算; j < i+01 变量与常量及其运算; j ++) {

            cout << i << "*" << j << "=" << i*j << "\t" ;
        }
        cout << endl;
    }
*/


    int i = 1;
    while (i < 10) {
        for (int j = 1; j <= i; j ++) {
            cout << i << "*" << j << "=" << i*j << "\t" ;
        }
        cout << endl;
        i ++;
    }
    return 0;
}