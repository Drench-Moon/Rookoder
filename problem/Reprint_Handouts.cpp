#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    // 请在此输入您的代码
    int N;
    cin >> N;
    long long D[N];
    for (int i = 0; i < N; i++) {
        cin >> D[i];
    }
    sort (D, D + N);
    long long sum = 0;
    for (int i = 0; i < N - 1; i++) {
        sum += D[i] * 2;
    }
    sum += D[N - 1];
    cout << sum << endl;
    return 0;
}