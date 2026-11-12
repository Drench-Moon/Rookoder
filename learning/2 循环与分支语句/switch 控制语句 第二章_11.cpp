#include <iostream>
#include <string>
#include <windows.h>


using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    // int num;
    // cout << "请输入1~4的整数" << endl;
    // cin >> num;
    //
    // switch (num) {
    //     case 1 变量与常量及其运算:
    //         cout << "你输入的是1" << endl;
    //         break;
    //     case 2 循环与分支语句:
    //         cout << "你输入的是2" << endl;
    //         break;
    //     case 3 数组与指针:
    //         cout << "你输入的是3" << endl;
    //         break;
    //     case 4 结构体与函数:
    //         cout << "你输入的是4" << endl;
    //         break;
    //     default:
    //         cout << "输入错误" << endl;
    //
    //
    // }


    int num;
    cout << "请输入分数（1 变量与常量及其运算~10)" << endl;
    cin >> num;

        switch (num) {
            case 10:
            case 9:
                cout << "优秀" << endl;
                break;

            case 8:
            case 7:
                cout << "优秀" << endl;
                break;

            case 6:
            case 5:
                cout << "良好" << endl;
            break;

            case 4:
            case 3:
                cout << "一般" << endl;
                break;

            default:
                cout << "差" << endl;
    }
    return 0;
}
