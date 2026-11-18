//
// Created by Drench_Moon on 2026/10/26.
//
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    // int N;
    // cin >> N;
    // vector<string> v(N, "");
    // if (N == 1) {
    //     cout << "Yes" << endl;
    //     return 0;
    // }
    // for (int i = 0;i < N; i ++) {                                  //输入N行编码
    //     cin >> v[i];
    // }
    // for (int i = 0; i < N ; i ++) {                                //分别遍历第i个字符串和与其不同的字符串，
    //     for (int k = 0; k < N; k ++) {
    //         if (i == k) {
    //             continue;
    //         }
    //         int j = 0;
    //         for (; j < v[i].length() && j < v[k].length(); j ++) {
    //             if (v[i][j] != v[k][j]) {
    //                 break;
    //             }
    //         }
    //         if (j == v[i].length()) {
    //             cout << "No" << endl;
    //             return 0;
    //         }
    //     }
    // }
    // cout << "Yes" << endl;


    //以上方法时间复杂度是O(N²·L), 如下方法(利用字典排序)可以简化
    /*
     *证明:只需要字典排序后比较相邻串
     *反证法:
     *假设存在两个串 a 是 b 的前缀，字典序排序后它们不相邻
     *中间夹着某个串c 即(a < c < b)
     *因为 a 是 b 的前缀，所以 b  的前 |a|  个字符就是 a
     *现在 a < c < b 夹着 c：
     *如果 c 以 a 开头且比 a 长 → a 是 c 的前缀（相邻对 a-c 已被检出）
     *如果`c` 不以`a` 开头 →
     *那`c` 要么比`a` 短且`a` 以`c` 开头（`c` 是`a` 的前缀，相邻对 a-c 检出），
     *要么`c` 和`a` 在`|a|` 之前就分道，那`c` 不可能排在`a` 和`b` 之间（因为`b` 前`|a|` 位全是`a` ）
     *结论：只要存在前缀关系，排序后必然有某一对相邻串满足前缀关系。
     */

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<string> v(N, "");
    for (int i = 0;i < N; i ++) {                                  //输入N行编码
        cin >> v[i];
    }
    sort (v.begin(), v.end());
    if (N == 1) {
        cout << "Yes" << endl;
        return 0;
    }
    for (int i = 0; i < N - 1; i ++) {
        if (v[i].compare(0, v[i].size(),v[i]) == 0) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;

}
