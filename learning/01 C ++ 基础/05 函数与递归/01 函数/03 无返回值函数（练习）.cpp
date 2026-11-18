#include <iostream>
#include <windows.h>
using namespace std;

void demo (int N) {
    for (int i = 0; i < N; i++) {
        SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
        SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8
        cout << "第" << i + 1<< "次循环" << endl;
    }
}

int main () {
    // SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    // SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8
    int N;
    cin >> N;
    demo (N);
    return 0;
}
