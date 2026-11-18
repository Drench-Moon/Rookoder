#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main () {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    struct student{
        string name;
        int age{};
        //int age = 0;   上一行代码的{}表示就是默认赋值为0， 也可以用=赋值默认值
        string gender;
    };
    student student;
    cout << student.name << endl;    //不赋值默认为空字符串
    return 0;
}