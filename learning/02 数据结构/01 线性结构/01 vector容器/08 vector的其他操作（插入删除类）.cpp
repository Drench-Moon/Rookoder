//
// Created by Drench_Moon on 2026/10/24.
//
#include <iostream>
#include <vector>
using namespace std;
int main() {

    //括号内需要用迭代器的位置，不能直接用元素下标

    vector<int> v = {1, 2, 3, 4, 5};
    v.insert(v.begin(), 2, 3);              //在第 1 个元素  之前  处插入 2 个 3
    for (int & i : v) {
        i ++;
        cout << 2 * i << " ";
    }                                                     //4, 4, 2，3，4，5，6
    cout << endl;

    v.erase(v.begin() + 1);                     //删除第二个元素
    v.push_back(1);                                     //4, 2, 3, 4, 5, 6, 1
    v.erase(v.begin() + 1, v.end() - 4);            //删除区间  [first, last)  的元素, 第2个到第3个  变成 4, 4, 5, 6 ,1
    for (const auto &i : v) {
        cout << i << " ";
    }

    v.assign(6, 4);
    v = vector<int>(6, 4);


    cout << endl;
    vector<int>v1 = {0, 0, 0, 0, 0, 0, 21309, 102930212};
    for (auto it = v1.begin(); it != v1.end();) {      //erase和push_back之后迭代器都会失效，不能再用原来的迭代器
        if (*it == 0) {
            it = v1.erase(it);                     //两个作用：删除和赋值，erase有返回值，返回指向删除元素的选一个元素的迭代器，迭代器更新，可以继续用
        }
        else {
            ++it;                                    //如果没有删除元素，就正常遍历
        }
    }
    for (auto i : v1) {
        cout << i << " ";
    }
}