//
// Created by Drench_Moon on 2026/11/16.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>
using namespace std;

int Maxof(vector<int>& a, int l = 0, int r = -1) {
    if (r < 0) r = a.size() - 1;
    if (l == r) return l;
    int mid = l + (r - l + 1) / 2;
    int i = Maxof(a, l, mid - 1);
    int j = Maxof(a, mid, r);
    return a[i] >= a[j] ? i : j;
}

int main(){

    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }



    //把a排序，最后要在a中表示出现最多的数
    sort(a.begin(), a.end());




    //b数组的作用就是记录差异坐标
    vector<int> b;
    for(int i = 0; i < n - 1; i ++) {
        if(a[i] != a[i + 1]) b.push_back(i);
    }
    // for (int i : b) {
    //     cout << i << " ";
    // }



    //c数组的作用是记录每个数字的重复次数
    vector<int> c = b;
    for(int i = 1; i < c.size(); i++){
        c[i] = b[i] - b[i - 1];
    }
    
    c[0] ++;
    c.push_back(n - b.back() - 1);

    // for (int i : c) {
    //     cout << i << " ";
    // }

    int target = Maxof(c);
    // cout << target << endl;

    cout << /*"出现最多的数字是" <<*/ a[target] << /*", 出现了" <<*/ " " << c[target] << /*"次" <<*/ endl;

}