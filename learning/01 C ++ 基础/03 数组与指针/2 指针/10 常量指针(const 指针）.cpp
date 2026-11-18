#include <iostream>
#include <string>
#include <windows.h>


using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    //const指针有两种：
    /*  01 变量与常量及其运算：指向const的指针，其指向区域的数据是不变的，但可以更换指向
        模板  const 数据类型 * 指针名称
         或者 数据类型 const * 指针名称 ，const 在*之前即可
    */
    int num1 =10, num2 = 100;
    const int *p1 = &num1;
    //*p1 = 100;                //这是不可更改的
    p1 = &num2;               //只读指针可以更换指向
    //*p1 = 10;                 //不管更换多少指向都不可更改指向区域的数据
    cout << p1 << endl;

    /*   02 循环与分支语句： const指针，指向的地址不可改变，但指向区域的数据可以改变
         const 在 * 之后
    */
    int * const p2 = &num1;
    //p2 = &num2;             //这是不可更改的，所以必须初始化，否则之后更改不了
    *p2 = *p1;                //指向的数据可以改变
    cout << p2 << endl;

    /*   03 数组与指针：指向const的const指针
            结合上面两个
    */
    const int * const p3 = &num1;
    //p3 = &num2;              //均不可更改，必须初始化，否则之后更改不了
    //*p3 = num2;              //均不可更改
    return 0;
}