#include <iostream>
#include <string>
#include <windows.h>
#include <random>


int random(int min, int max) {
    std :: random_device rd;
    std :: mt19937 gen(rd());
    std :: uniform_int_distribution<> dis(min, max);
    int random_number = dis(gen);
    return random_number;
}
int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num = random(1,100);

    return 0;
}