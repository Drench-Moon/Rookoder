#include <iostream>
#include <string>
#include <windows.h>


using namespace std;
int main() {
    SetConsoleOutputCP(CP_UTF8);       // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);             // cin GBK编码转换UTF_8

    int * pArr = new int[5]{3,5,9,11,13};
    int * pnewArr = new int[7];

    int tsf = 0;

    for (int i = 0; i < 7; i++) {
        if (i == 0) {
            pnewArr[i] = 1;
            tsf ++;
        }
        else if (i == 2) {
            pnewArr[i] = 7;
            tsf ++;
        }
        else {
            pnewArr[i] = pArr[i - tsf];
        }
    }
    for (int j = 0; j < 7; j++) {
        cout << pnewArr[j] << endl;
    }
}