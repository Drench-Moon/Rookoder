#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    int p = 0;
    int *o = &p;
    int *q = new int;              //new int 可以赋予指针q地址，此时q指向的地址为空，如果输出*q会输出随机垃圾值
    *q = 10;
    cout << q << " " << o << endl;
    cout << *q << " " << *o << endl;

    *q = 1;
    cout << q << " " << o << endl;
    cout << *q << " " << *o << endl;
    delete q;
    cout << q << endl;


    cout << "数组" << endl;
    int *m = new int [5];
    m[0] = 1;          // 指针也可以用于下标，与与下一行等价
    *m = 1;

    m[1] = 4;
    *(m + 1) = 4;

    cout << m[0] << " " << m[1] << endl;          //初始未赋值的m[2 循环与分支语句]等如果输出，大部分是0（new来的新空间），偶尔会输出垃圾值
    delete[] m;
    cout << "--------" << endl;

    int k = 1;
    k += 1;
    cout << k << endl;
    cout << &k <<  endl;

}