//
// Created by Drench_Moon on 2026/11/13.
//
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr (n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0 ;j < m; j++){
            cin >> arr[i][j];
        }
    }


    vector<int> sum(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            sum[i] += arr[i][j];
        }
        cout << sum[i] << '\n';
    }

    vector<double> bal(m);
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            bal[i] +=  (double)arr[j][i] / n;
        }
        cout << fixed << setprecision(2) << bal[i] << " ";
    }


    cout << '\n';
    int max_idx = 0;
    for (int i = 0; i < n; i++) {
        if (sum[i] > sum[max_idx]) {
            max_idx = i;
        }
    }

    cout << max_idx + 1 << '\n';
    return 0;
}