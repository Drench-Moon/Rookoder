//
// Created by Drench_Moon on 2026/10/25.
//
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v;
    for (int i = 1; i <= 10; i++) {
        v.push_back(i);
    }
    vector<int> v1;
    for (auto it = v.rbegin(); it != v.rend(); ++ it) {
        v1.push_back(*it);
    }
    for (int i = 0; i < 10; i++) {
        cout << v[i] << " ";
        cout << v1[i];
        cout << endl;
    }

    vector<int> v2 = v;
    v.swap(v1);                    //交换v和v1
    vector<int> ().swap(v2);       //用空vector交换v2，彻底释放vw内存
}