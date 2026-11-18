#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main () {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    struct stu {
        string name;
        int age{};
        string gender;
    };

    struct stu kskbl ={
        "a",12,"q"
    };

    stu *m = &kskbl;
    //通过结构体指针访问成员
    cout << m -> name << endl;
    cout << m -> age << endl;
    cout << m -> gender << endl;
    cout << endl;


    stu *q = new stu {"小玲",18,"女"};

    cout << q -> name << endl;
    cout << q -> age << endl;
    cout << q -> gender << endl;
    delete q;
    cout << endl;


    struct stu st [2] = {
        {"小明",18,"男"},
        {"小美",17,"女"}
    };

    stu *p = st;                                  //指针取成员用  ->         结构体取成员用 . name
    cout << p -> name << endl;
    cout << (p+1) -> name << endl;
    cout << st[0].name << endl;                   //st是数组名称
    cout << p[0].name << endl;                    //p[0] 指的是结构体，取成员用.name(指针也可以用下标）
    cout << endl;

    auto *l = new stu [3] {
        {"aasd",13,"asds"},
        {"小明",18,"男"},
        {"小美",17,"女"}
    };
    cout << l[0].name << endl;
    cout << (l+1) -> age << endl;                    //同上
}