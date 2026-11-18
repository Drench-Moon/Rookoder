#include <iostream>
#include <string>
#include <windows.h>


using std :: cout;
using std :: endl;
using std :: cin;
using std :: string;
int main()
{
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    string  names[]{"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T"};
    string v[2][2][5];

    // int l = 0;
    // for (auto &i : v) {           // 第1层：i 是 string[02 循环与分支语句][02 循环与分支语句] 的引用
    //
    //     for (auto &j : i) {         // 第2层：j 是 string[02 循环与分支语句] 的引用
    //
    //         for (auto& k : j) {       // 第3层：k 是 string，可以复制（string 是类，能复制）
    //
    //             k =  name[l];
    //             l ++;
    //             cout << k;
    //         }
    //     }
    // }
    int m = 0;
    for (int i = 0; i < std:: size(v); i ++)
    {

        for (int j = 0; j < std:: size(v[0]); j ++)
        {

            for (int k = 0; k < std:: size(v[0][0]); k ++) {
                string major = i?"物理":"计算机";
                string class_name =j?"1班":"2班";
                int seat_num = k +1;
                string name = names[k + 5 * m];
                string msg = major + "专业，" + class_name + "，座位号为" + std::to_string(seat_num) + "的同学叫" + name;
                cout << msg << endl;
            }
            m ++;
        }
    }
    return 0;
}