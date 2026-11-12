#include <iostream>
#include <string>
#include <windows.h>
#include <random>
#include <cctype>          // isdigit

using namespace std;

int get_random_num(int min, int max)
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(min, max);
    return dis(gen);
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num = get_random_num(1, 13);
    string s;
    cout << "请猜点数(1 变量与常量及其运算~13)" << endl;

    while (true)
    {
        getline(cin, s);              // 读一整行，输入什么都不会留残渣

        bool ok = !s.empty();
        for (char c : s)
        {
            if (!isdigit((unsigned char)c))   // 只要有一个非数字字符（. / a 等）就非法
            {
                ok = false;
                break;
            }
        }

        if (!ok)
        {
            cout << "请输入1~13的正整数" << endl;
            continue;           // 跳过后面，回到 while 开头重新读
        }

        int num2 = stoi(s);           // 整行都是数字，才转换成整数
        if (num2 < 1 || num2 > 13)
            cout << "请输入1~13的正整数" << endl;
        else if (num2 < num)
            cout << "你猜小了" << endl;
        else if (num2 > num)
            cout << "你猜大了" << endl;
        else
        {
            cout << "你猜对了, 接下来猜花色" << endl;
            break;
        }
    }

    cout << "请猜测花色（红桃/黑桃/方块/梅花）" << endl;
    string colors[4] = {"红桃", "黑桃", "方块", "梅花"};
    int idx = get_random_num(0, 3);
    string result = colors[idx];

    string speculation;
    while (getline(cin, speculation))   // 花色也用 getline，同样不会读到残渣
    {
        if (speculation == result)
            break;
        cout << "猜错了，请重新输入" << endl;
    }
    cout << "恭喜你，猜对了" << endl;

    return 0;
}
