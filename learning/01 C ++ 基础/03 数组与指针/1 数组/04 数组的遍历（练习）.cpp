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


    int v[10];
    for (int & i : v) {
        int num = get_random_num(1,100);
        i = num;
        cout << i << endl;
    }


    int max = v[0];
    int min = v[0];
    for (int k : v){
        if (k > max){
            max = k;
        }
        if (k < min){
            min = k;
        }
    }

    cout << "最大" << max << "，最小" << min << endl;
    return 0;
}