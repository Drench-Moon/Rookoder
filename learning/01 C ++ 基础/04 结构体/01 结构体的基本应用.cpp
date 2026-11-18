#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main () {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    //结构体“struct”，指一种用户自定义的复合数据类型，可以包含不同类型的不同成员
    /*
    声明结构体的语法
    struct 结构体类型
    {
        成员1类型 成员1名称
        ······
        成员n类型 成员n名称
    };
     */

    struct student        //主动创建一个非C++自带的数据类型Student    数据类型即int double等
    {
        string name;
        int age{};
        string gender;
    };

    //结构体变量的声明前可以加上struct（也可以省略）
    struct student stu;       //结构体变量 stu
    stu = {"将介士",78,"女"};
    //cout << stu << endl;            //结构体是包装袋，不能直接输出里面的内容
    cout << stu.name << endl;         //输出语法是   （变量名称）.（成员名称）
    cout << stu.age << endl;
    cout << stu.gender << endl;


    return 0;
}