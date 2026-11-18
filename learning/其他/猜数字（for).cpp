#include <iostream>
#include <string>
#include <windows.h>
#include <random>

using namespace std;

static int get_random_num(int min, int max) {
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

   int guess = 0;
    for (bool i = guess == num; i != 1;) {
        cin >> guess;
        if (guess == num) {
            cout << "对" << endl;
            i = true;
        }
        else if (guess > num) {
            cout << "大" << endl;
        }
        else {
            cout << "小" << endl;
        }

    }
    return 0;
}