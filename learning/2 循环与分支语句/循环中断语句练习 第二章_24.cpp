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

    int a = 0;
    int b = 0;
     for ( int i = 1; i < 10; i++) {
         cout << "第" << i << "次循环" << endl;
         int num = get_random_num(1,10);
         int num2 = get_random_num(1,2);
         cout << "流程1" << endl;
         if (num == 1) {
             cout << "触发出局惩罚" << endl;
             b ++;
             break;
         }
         else if (num != 1) {
             cout << "未触发出局惩罚，继续" << endl;
         }
         if (num2 == 1) {
             cout << "触发跳过惩罚" << endl;
             a += 1;
             continue;
         }
         else
             cout << "未触发跳过惩罚，游戏继续" << endl;
         cout << "流程2" << endl;
         cout << endl;
     }
    cout << "游戏结束，一共跳过了" << a << "次，出局" << b << "次" << endl;
    return 0;
}