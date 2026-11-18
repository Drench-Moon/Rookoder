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
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num = get_random_num(1,100);
    int guess;
    cout << "第" << 1 << "次猜测" << endl;
    cin >> guess;
    int time = 1;                                        //次数

    while (guess != num) {                                      //若不相等，输出大了或小了
        /*
        if (guess > num) {
            cout << "你猜大了" << endl;
        }
        else {
            cout << "你猜小了" << endl;
        }
        */
        string result = guess > num ? "你猜大了" : "你猜小了" ;
        cout << result << endl;
        time++;
        cout << " " << endl;
        cout << "第" << time << "次猜测" << endl;
        cin >> guess;

    }
    cout << "你猜对了" << endl;
    cout << " " << endl;
    cout << "你一共猜了" << time << "次" << endl;
    //}
    return 0;
}
