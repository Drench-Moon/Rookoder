//
// Created by Drench_Moon on 2026/11/17.
//
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, m, p;
    cin >> n >> m >> p;
    vector<vector<int>> A(n, vector<int>(m));
    vector<vector<int>> B(m, vector<int>(p));
    vector<vector<int>> C(n, vector<int>(p));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++) {
            cin >> B[i][j];
        }
    }
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < p; j++){
            for(int k = 0 ; k < m; k ++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    for(auto i : C){
        for(int j : i){
            cout << j << " ";
        }
        cout << endl;
    }
}