// 题目描述

// 在二进制编码中，若一组码字满足：

// 每个码字都只由字符 0 和 1 组成；
// 不存在两个不同的码字 a 和 b，使得 a 是 b 的前缀；

// 那么称这组码字是一个前缀码。

// 例如：

// 0, 10, 110, 111 是前缀码；
// 0, 01, 10 不是前缀码，因为 0 是 01 的前缀；
// 10, 10, 011 也不是前缀码，因为有两个相同的码字，会导致译码不唯一。

// 现在给定 n 个二进制码字，请你判断它们是否构成前缀码。

// 输入描述

// 第一行输入一个整数 n，表示码字个数。

// 接下来 n 行，每行输入一个非空二进制字符串，表示一个码字。

// 输出描述

// 如果这组码字是前缀码，输出 Yes；
// 否则输出 No。

#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<string> v(N, "");
    if (N == 1) {
        cout << "No" << endl;
        return 0;
    }
    for (int i = 0;i < N; i ++) {                                  //输入N行编码
        cin >> v[i];
    }
    for (int i = 0; i < N ; i ++) {                                //分别遍历第i个字符串和与其不同的字符串，
        for (int k = 0; k < N; k ++) {
            if (i == k) {
                continue;
            }
            int j = 0;
            for (; j < v[k].length(); j ++) {
                if (v[i][j] != v[k][j]) {
                    break;
                }
            }
            if (j == v[i].length()) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
}