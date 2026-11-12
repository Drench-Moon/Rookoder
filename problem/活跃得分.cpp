#include <iostream>
using namespace std;
int main()
{
    // 请在此输入您的代码
    int N, K;
    cin >> N >> K;
    long long v[100005];
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    long long sum = 0;
    for (int k = 0; k < K; k++) {   // 第一组
        sum += v[k];
    }

    long long mx = sum;
    for (int j = 0; j < N - K; j++) {   // 滑动 N-K 次
        sum += v[j + K] - v[j];
        if (sum > mx) mx = sum;
    }

    cout << mx;
}