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
int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    int balance = 10000;
    for (int j = 1; j < 20; j++) {
        int i= get_random_num(1,10);

        if (balance > 0) {
            cout << "员工" << j << "，绩效分" << i ;    //员工号：j   绩效分：i
            if (i < 5) {
                cout << "，低于5，不发放工资" << endl;
                continue;
            }
            else {
                balance -= 1000;
                cout << ",发放工资1000元，账户余额" << balance << "元" << endl;
            }
        }
        else {
            cout << "余额不足，员工";
            while (j < 20) {
                    cout << j << "," ;
                    j ++;
                }
                cout << j << "请下个月领取" << endl;

        }
    }
    return 0;
}