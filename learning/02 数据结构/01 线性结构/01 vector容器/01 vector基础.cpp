#include <iostream>
#include <string>
#include <windows.h>
#include <vector>


using namespace std;
int main() {
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    //vector 数组包含4种初始化写法：
    vector <int> v0;                           // 01 变量与常量及其运算. 空vector数组，没有元素
    vector <int> v1(4);                      // 02 循环与分支语句. 初始化为4个均为0的元素
    vector <double> v2 = {1.2,2,3};            // 03 数组与指针. 初始化为3个元素，分别为  01 变量与常量及其运算.02 循环与分支语句   02 循环与分支语句   03 数组与指针
    v2 = {1.23, 4.4, 5, 100.0};                //    把v2改成长度为4个，元素不同，vector支持整体赋值
    vector <double> v3(5, 2.3);         // 4 结构体与函数. 初始化为5个 02 循环与分支语句.03 数组与指针    第二种初始化相当于第四种没有第二个参数(02 循环与分支语句.03 数组与指针)

    /*对于第2中初始化方法，不同的类型有不同的“0”
    int       0
    double    0.0
    string    ""          (空字符串，长度为0）
    bool      false
    char      '\0'        (一个空字符）
    int*      nullptr     (空指针)
    */


    cout << v1[0] << endl;                    //输出v1的第一个元素(被初始化为0)
    cout << v2[1] << endl;
    cout << v3[5] << endl;

    return 0;
}