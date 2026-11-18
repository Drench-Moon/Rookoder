//
// Created by Drench_Moon on 2026/10/27.
//
#include <iostream>
#include <ostream>
#include <string>
using namespace std;
int main() {
    class Student {                  //声明新类型，类似struct
    public:                      //谁能访问，如果是public, 则与基本完全等于把 class 换成 struct
        string name;
        int age;
        double score;

        void printInfo() {         //成员函数
            cout << name << ":" << age << ":" << score << endl;
        }
    };                          //<分号不能漏掉
    Student abc = {"lisa", 16, 97};
    abc.printInfo();           //类似读取成员，调用成员函数也用 .func, 他们都是成员
}