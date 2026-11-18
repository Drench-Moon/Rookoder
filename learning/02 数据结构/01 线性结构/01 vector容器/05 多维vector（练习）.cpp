//
// Created by Drench_Moon on 2026/10/23.
//
#include <iostream>
#include <vector>
using namespace std;
int main() {
    //创建3行4列的二维vector并全部初始化为0
    vector<vector<int>> a(3, vector<int>(4, 0));

    //修改元素
    a[2][2] = 2;

    //遍历输出
    for (auto &i : a) {
        for (auto &j : i) {
            cout << j << " " ;
        }
        cout << endl;
    }

    //不规则的二维数组
    vector<vector<int>> b;
    b.push_back({1});             //注意：括号内增加的是{1}，有大括号，也就是外层数组里的第一个元素是一个只有一个元素是1的数组
    b.push_back({1, 2});
    b.push_back({1, 2, 3});

    cout << "irregular shapes" << endl;
    for (auto &i : b) {
        for (auto j : i) {
            cout << j << " " ;
        }
        cout << endl;
    }

    return 0;
}