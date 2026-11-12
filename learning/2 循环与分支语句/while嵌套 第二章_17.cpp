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

    int day = 1;
    bool CONTI = true;
    while (CONTI) {
        cout << "output" << day <<  endl;
        day = 1;

        while (day <= 2) {
            day ++;
            cout << "hello" << endl;
        }

        day = 1;

        int num = get_random_num(1,3);

        if (num == 1) {
            CONTI = false;
        }

    }
    cout << "END" << endl;
    return 0;
}