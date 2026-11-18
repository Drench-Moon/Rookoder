// 由一批相同类型元素（element）的集合所组成的数据结构，分配一连续的内存来存储
//数据类型 + 数组名称 + 数组长度


#include <iostream>
#include <string>
#include <windows.h>


using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    int v[6];                                 //声明可以存放六个int数字的数组
    v[0] = 1;                                 //先声明，后赋值
    v[1] = 2;
    v[2] = 3;
    v[3] = 4;
    v[4] = 5;
    v[5] = 6;

    int i ;
    for ( i = 1 ; i <= 6; i++) {
        cout << "数组内第" << i << "个数字是" << v[i-1] << endl;
    }
    cout << i << endl;

    cout << "数组2" << endl;
    int v2[] = {11, 22, 33, 44, 55, 66};
    return 0;
}