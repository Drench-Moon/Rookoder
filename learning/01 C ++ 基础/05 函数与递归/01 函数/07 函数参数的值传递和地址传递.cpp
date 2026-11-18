#include <iostream>
using namespace std;

void switch_num(int a, int b) {                           //对于左侧代码，并没有进行x和y的交换，本质上是因为：
    int tem = a;                                          //在定义的函数里，将x和y的值赋值给了函数里的a和b，但对于x和y没有任何影响，称为值传递，通过副本进行操作就是对函数内部的进行操作，和外部没什么关系
    a = b;                                                //如果想通过这种方式来交换变量需要改为有返回值的函数，同时要返回
    b = tem;
}
void switch_num2(int *a, int *b) {                        //该函数是指针传递，把a和b记录的地址进行操作，就是对x和y操作了
    int tem;                                              //通过地址进行操作可以操作到所有处于这个地址的变量
    tem = *a;
    *a = *b;
    *b = tem;
}

void switch_num3(int &a, int &b) {                        //&为引用绑定，不是取地址，可以直接传入变量，而后对变量进行操作
    int tem;
    tem = a;
    a = b;
    b = tem;
}
int main()
{
    int x = 1;
    int y = 2;
    switch_num(x, y);
    cout << x  << " " << y << endl;
    cout << endl;

    switch_num2(&x, &y);
    cout << x  << " " << y << endl;
    cout << endl;

    switch_num3(x, y);
    cout << x  << " " << y << endl;
    cout << endl;
    return 0;

}