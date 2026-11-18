#include <iostream>
#include <string>
#include <windows.h>
#include <random>


using namespace std;

int get_random_num(int min, int max) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(min, max);
    int random_number = dis(gen);
    return random_number;
}
int main()
{
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    int num =get_random_num(1,5);
    cout << "输入数字" << endl;
    int num2;

    do {
        cout << "请猜测数字" << endl;
        cin >> num2;
        if (num > num2) {
            cout << "你猜小了" << endl;
        }
        else if (num2 > num) {
            cout << "你猜大了" << endl;
        }
    }
    while (num != num2);
    cout << "你猜对了" << endl;

    return 0;
}

