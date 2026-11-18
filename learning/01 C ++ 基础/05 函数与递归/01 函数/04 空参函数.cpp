#include <iostream>
#include <windows.h>
using namespace std;

void sf (){
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8
    cout << "大家好，我叫淬月" << endl;
    cout << "我是天津大学本科一年级智能与计算学部在读学生" << endl;
    cout << "今年18岁" << endl;
}
int main() {
    sf();
}
