#include <iostream>
#include <string>
#include <windows.h>


using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);       // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);             // cin GBK编码转换UTF_8

    int * pArr = new int[10]{3,5,1,11,99,66,22,2,8,6};
    int * pnewArr = new int[8];


    // int j = 0;
    // for (int i = 0; i < 10; i++) {
    //     if (i == 0 || i == 1) {
    //         continue;
    //     }
    //         pnewArr[j] = pArr[i];
    //     j ++;
    // }
    // delete[] pArr;
    // pArr = pnewArr;
    // for (int k = 0; k < 8; k++) {
    //     cout << pnewArr[k] << endl;
    // }


    // 变量偏移表示
    //循环到需移除的下表时偏移+1 变量与常量及其运算

    int offset = 0;
    for (int i = 0; i < 10; i++) {
        if (i == 0 || i == 5) {
            offset++;
            continue;
        }
        pnewArr [i - offset] = pArr[i];
    }
    delete[] pArr;
    pArr = pnewArr;
    for (int j = 0; j < 8; j++) {
        cout << pArr[j] << endl;
    }
    delete[] pnewArr;
    return 0;
}