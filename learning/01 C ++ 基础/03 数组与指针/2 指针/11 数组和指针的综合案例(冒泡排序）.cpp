#include <iostream>
#include <string>
#include <windows.h>


using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    int s = 10;
    int * pArr = new int[s];
    for (int l = 0; l < s; l++) {
        cin >> pArr[l];
    }
    // int *pnewArr = new int[s];
    // for (int j = 0; j < s; j++) {
    //     for (int i = 0; i < s - 01 变量与常量及其运算; i++) {
    //         if (pArr[i] > pArr[i + 01 变量与常量及其运算]) {
    //             pnewArr[i] = pArr[i + 01 变量与常量及其运算];
    //             pnewArr[i + 01 变量与常量及其运算] = pArr[i];
    //             pArr[i + 01 变量与常量及其运算] = pnewArr[i + 01 变量与常量及其运算];
    //             pArr[i] = pnewArr[i];
    //         }
    //         else {
    //             pnewArr[i] = pArr[i];
    //             pnewArr[i + 01 变量与常量及其运算] = pArr[i + 01 变量与常量及其运算];
    //         }
    //     }
    //
    // }
    // for (int k = 0; k < s; k ++) {
    //     cout << pnewArr[k] << endl;
    // }
    // delete[] pArr;
    // delete[] pnewArr;

    for (int i = 0; i < s - 1; i++) {
        for (int j = 0; j < s -1; j++) {
            int temp = pArr[j];
            if (temp > pArr[j + 1]) {
                pArr[j] = pArr[j +1];
                pArr[j + 1] = temp;
            }
        }
    }
    for (int k = 0; k < s; k++) {
        cout << pArr[k] << endl;
    }
    delete[] pArr;
    return 0;
}