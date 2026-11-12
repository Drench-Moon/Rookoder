#include <iostream>
#include <string>
#include <windows.h>


using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    int day = 1;
    int CONTI = 1;
    int num = 1;
    double num2 = 0.5;
    while (CONTI < 5) {
        cout << "今天是减肥第" << day << "天" << endl;


        while (num < 4) {
            cout << "第" << day << "天第" << num << "个" << "俯卧撑" << endl;
            num ++;
        }
        cout << "累计减重" << num2 << "斤" << endl;
        cout << " " << endl;
        day ++;
        num = 1;
        num2 += 0.5;
        CONTI ++;
    }

    cout << "四天减肥成功" << endl;
    return 0;
}