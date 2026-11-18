#include <iostream>
#include <string>
#include <windows.h>


using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    enum SEASON{
        SPRING =1,
        SUMMER,
        FALL,
        WINTER
    };
    cout << "请输入1，2， 3，4，表示春、夏、秋、冬" << endl;
    int num;
    cin >> num;
    switch (num) {
        case SPRING:
            cout << "春天" << endl;
            break;
        case SUMMER:
            cout << "夏天" << endl;
            break;
        case FALL:
            cout << "秋天" << endl;
            break;
        case  WINTER:
            cout << "冬天" << endl;
            break;
        default:
            cout << "何意味" << endl;
    }
    return 0;
}