#include <iostream>
#include <string>
#include <windows.h>
#include <vector>


using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    vector<int> v = {1, 0, 13};



    v.push_back(4);                          //在末尾加一个4
    cout << v[3] << endl;
    cout << endl;



    v.pop_back();                              //删除尾部
    cout << v.size() << endl;                  //长度
    cout << endl;



    v[0] = 999;                               //修改第一个元素
    cout << v.front() << endl;                //输出第一个元素(999)
    cout << v.back() << endl;                 //输出最后一个元素(13)
    cout << v.size() << endl;                 //输出数组长度(3)
    cout << "__________" << endl;


    //v[i]没有越界检查，而v.at(i)有越界检查    (clion中能够有vector容器的v[i]越界检查，也会运行错误)
    //int k = v.at(4);                    //运行错误
    int k = v. at(2);
    cout << k << endl;
    cout << endl;


    vector<int> v1;
    bool ok = v.empty();                     //判断数组是否为空，空1 非空0
    bool ok2 = v1.empty();
    cout << ok << " " << ok2 << endl;


    v1 = {1, 2, 3};
    v1.clear();                             //清空所有元素，(数组长度变为0)
    cout << v1.size();                      //长度变为0
    return 0;
}