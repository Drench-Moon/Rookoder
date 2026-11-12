//
// Created by Drench_Moon on 2026/10/31.
//
#include <iostream>
#include <vector>
using namespace std;
int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> X(n);
    for (int i = 0; i < n; i++) {
        cin >> X[i];
    }

    vector<long long> T(n);                        //记录每个位置是初始僵尸的时间

    long long strategy_l = 0, strategy_r = 0;      //初始僵尸向左向右两个方案


    for (int i = 0; i < n; i++) {                                            //初始僵尸会在任意一个地方
        if (i == 0 || i == n - 1) {                                          //最左或最右直接把最长距离/2
            strategy_l = (X[n - 1] - X[0]) / 2;                              //初始僵尸在最左或最右时, 左右两个方案是一样的
            strategy_r = (X[n - 1] - X[0]) / 2;
        }
        else {
            //左方案
            long long strategy_l_zombie = (X[i] - X[0]) / 2;                       //僵尸的时间是 X[i] 位置到最左边 X[0] 的距离 /2
            long long strategy_l_human_r = (X[n - 1] - X[i - 1]) / 2;              //人类的时间是僵尸左边一位X[i - 1] 到最右边 X[n - 1] 的距离 /2
            strategy_l = max(strategy_l_zombie, strategy_l_human_r);    //上面两个的最大值(取最小值的话有一个方向的人还没有全变僵尸)是本次左方案的时间

            //右方案
            long long strategy_r_zombie = (X[n - 1] - X[i]) / 2;                   //僵尸的时间是 X[i] 位置到最右边 X[n - 1] 的距离 /2
            long long strategy_r_human_l = (X[i + 1] - X[0]) / 2;                  //人类的时间是僵尸右边一位X[i + 1] 到最左边 X[0] 的距离 /2
            strategy_r = max(strategy_r_zombie, strategy_r_human_l);    //本次右方案的时间
        }

        T[i] = min(strategy_l, strategy_r);                             //两个方案的最小值记录在[i]位置初始的时间
    }

    for (int i = 0; i < n; ++i) {
        cout << T[i];
        if (i != n - 1) {
            cout << " ";
        }
    }

    vector<int> contrast(n);
    for (int i = 0; i < n; i++) {
        cin >> contrast[i];
    }

}
