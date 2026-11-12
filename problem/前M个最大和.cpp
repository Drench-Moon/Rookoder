//
// Created by Drench_Moon on 2026/11/1.
//
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int N, M;
    while(cin >> N >> M){
        vector<int> col(N);
        for(int i = 0; i < N; ++i){
            cin >> col[i];
        }


        //    long long sum = (N * (N - 1)) / 2;

        //记录 (N * (N - 1))/ 2个和
        vector<long long> Sum;
        for (int i = 0; i < N; ++i){
            for (int j = i + 1; j < N; ++j){
                Sum.push_back(col[i] + col[j]);
            }
        }
        sort(Sum.begin(), Sum.end());
        for (auto i = Sum.rbegin(); i != Sum.rbegin() + M; ++ i){
            cout << *i;
            if(i != Sum.rbegin() + M -1){
                cout << " ";
            }
        }
    }
    return 0;
}