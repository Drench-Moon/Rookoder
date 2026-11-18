//
// Created by Drench_Moon on 2026/11/18.
//
#include <iostream>
#include <vector>
using namespace std;

long long sumof(vector<long long> a, int l, int r) {
    long long sum = 0;
    for (int i = l; i <= r; i++) {
        sum += a[i];
    }
    return sum;
}


int main() {
    int n, q;
    cin >> n >> q;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<vector<int>> b(q, vector<int>(2));
    for (int i = 0; i < q; i++) {
        cin >> b[i][0] >> b[i][1];
    }

    for (int i = 0; i < q; i++) {
        cout << sumof(a, b[i][0] - 1, b[i][1] - 1) << endl;
    }
}