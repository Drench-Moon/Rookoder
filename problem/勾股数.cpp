//
// Created by Drench_Moon on 2026/10/27.
//
#include<iostream>
#include<vector>
using namespace std;
int main() {
    int a, b, c;
    for (int i = 1; i < 30; i++) {
        for (int j = i; j < 30; j++) {
            for (int k = j; k < 30; k++) {
                if (i*i + j*j == k*k) {
                    cout << i << " " << j << " " << k << endl;
                }
            }
        }
    }
}
