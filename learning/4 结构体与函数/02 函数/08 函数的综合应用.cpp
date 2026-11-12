#include <iostream>
using namespace std;

void bal() {
    cout << "Your balance is 50000 $." << endl;
}

int sav(int a) {
    a += 50000;
    return a;
}

int wit(int a) {
    a = 50000 - a;
    return a;
}

void bac() {
    cout << "Welcome come next time!" << endl;
}

void bank() {
    conti:
    int x;
    cin >> x;
    switch (x) {
        //查询余额
        case 1:
            bal();
            break;

        //存款
        case 2:
            cout << "Please input saving amount." << endl;
            int s;
            cin >> s;
            sav(s);
            cout << "saving " << s << " $ successfully." << endl;
            cout << "Your balance is "<< sav(s) << " $." << endl;
            break;

        //取款
        case 3:
            cout << "Please input withdrawing amount." << endl;
            int w;
            cin >> w;
            if (w <= 50000) {
                cout << "withdrawing " << w << " $ successfully." << endl;
                cout << "Your balance is "<< wit(w) << " $." << endl;            //计算取款后余额
            }
            else {
                cout << "Your balance is insufficient." << endl;
            }
            break;

        //退出
        case 4:
            bac();
            break;

        default:
            cout << "Please press 1 变量与常量及其运算, 2 循环与分支语句, 3 数组与指针, 4 结构体与函数 to chose operations." << endl;
            goto conti;
    }
}
int main() {
    cout << "Welcome to E-BANK. Please press 1 变量与常量及其运算, 2 循环与分支语句, 3 数组与指针, 4 结构体与函数 to chose operations." << endl;
    bank();
    return 0;
}