//
// Created by Drench_Moon on 2026/11/12.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    for (int j = n - 1; j >= 0; --j) {
        int maxidx = j;

        for (int i = j - 1; i >= 0; --i) {
            if (abs(arr[i]) > abs(arr[maxidx])) {
                maxidx = i;
            }
        }
        if (maxidx != j) {
            int temp = arr[maxidx];
            for (int i = maxidx; i < j; i++) {
                arr[i] = arr[i + 1];
            }
            arr[j] = temp;
        }
    }

    for (int i: arr) {
        cout << i << " ";
    }
}
