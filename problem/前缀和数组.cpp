//
// Created by Drench_Moon on 2026/11/17.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> a(n), b(1001);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i : a){
        b[i] ++;
    }

    int max_time = b[0];
    for(int i = 0; i < 1001; ++i){
        max_time = max(max_time, b[i]);
    }

    for(int i = 0; i < 1001; i++){
        if(b[i] == max_time){
            cout << b[i] << " " << i  << endl;
            break;
        }
    }
}