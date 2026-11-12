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

    int num = get_random_num(1,10);

    long k = 0;
    long v[10];
    while (true) {
        for (long i = 1; i <= 10; i++) {
            cin >> v[i];
            if (v[i] == num ) {
                k ++;
            }
            else {
                continue;
            }

        }

        cout << "你的猜测是；" ;
        for (long j = 1; j < 10; j ++) {
            cout << v[j] << "、";
        }
        cout << v[10] << endl;
        cout << "你猜对了" << k << "个" << endl;
        k = 0;
    }
    return 0;
}