//
// Created by Drench_Moon on 2026/11/16.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int max_sum = a[0];
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += a[j];
            max_sum = max(max_sum, sum);
        }

    }
    cout << max_sum;
}

