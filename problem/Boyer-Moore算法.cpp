//
// Created by Drench_Moon on 2026/10/27.
//
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    vector<string> v(2);
    cin >> v[0] >> v[1];
    if (v[0].size() > v[1].size()) {
        swap(v[0], v[1]);
    }
    vector<int> k;
    for(int a = 0; a + v[0].size() <= v[1].size(); a ++){
        if(v[1].compare(a, v[0].size(), v[0]) == 0){
            k.push_back(a);
        }
    }
    if(k.empty()) {
        cout << -1;
    }
    else {
        for(int i = 0; i < k.size(); i ++){
            cout << k[i];
            if (i !=k.size() - 1) {
                cout << " ";
            }
        }
    }
    return 0;
}
