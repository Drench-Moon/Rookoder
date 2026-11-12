#include <iostream>
#include <string>
#include <windows.h>


using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    //引用指的是一个已存在变量的别名，和指针又类似之处，
    //但是指针是指向相同内存区域的东西，可通过修改指针指向的地址，而引用不可以，引用锁定了内存区域，不能修改（指向其他区域）
    //引用不能修改，因此引用必须初始化，而且不能为空（否则不能改，类似常量指针）

    int a = 10;
    int & b = a;
    b = 1;
    cout << a << endl;

    double m = 11.123;
    double &j = m;
    j = 1.23;
    cout << j << endl;

    return 0;
}