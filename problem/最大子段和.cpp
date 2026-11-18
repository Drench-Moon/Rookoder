//
// Created by Drench_Moon on 2026/11/18.
//
//
// Created by Drench_Moon on 2026/11/16.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int max_sum = a[0];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        max_sum = max(max_sum, sum);        //每次加都判断
        if (sum < 0) sum = 0;                    //如果小于0, 舍弃已有和, 从下一个开始算
    }
    cout << max_sum << endl;
}