#include <iostream>
using namespace std;
int main()
{
    // 请在此输入您的代码
    int a;
    int b;
    cin >> a >> b;
    if ((a % b) == 0) {
        cout << a / b  << endl;
    }
    else {
        cout << a / b + 1 << endl;
    }
    return 0;
}