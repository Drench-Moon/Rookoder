//
// Created by Drench_Moon on 2026/11/17.
//

#include <iostream>
#include <vector>
using namespace std;

bool BinarySearch(vector<int> &a, int l, int r, int x) {
    if (r < l) {
        return false;
    }
    int mid = l + (r - l) / 2;
    if (a[mid] == x) {
        return true;
    }
    if (a[mid] > x) {
        return BinarySearch(a, l, mid - 1, x);
    }
    if (a[mid] < x) {
        return BinarySearch(a, mid + 1, r, x);
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int x;
    cin >> x;
    bool result = BinarySearch(a, 0, n - 1, x);
    cout << (result? "YES": "NO") << endl;
}