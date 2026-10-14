#include <iostream>
using namespace std;
int main()
{
    // 请在此输入您的代码
    int N, K, C, B;
    cin >> N >> K >> C >> B;     // 人数、座位、租金、可用经费
    int A[N];
    for (int i = 0; i < N; i ++){
        cin >> A[i];
    }
    for(int i = 0; i < N; i++){              //将餐费从小到大排列
        int mindix = i;
        for(int j = i + 1; j < N; j++) {
            if (A[j] < A[mindix]) {
                mindix = j;
            }
        }
        if (i != mindix) {
            int temp = A[i];
            A[i] = A[mindix];
            A[mindix] = temp;
        }
    }
    // for (int i = 0; i < N; i++) {
    //     cout << A[i] << " ";
    // }
    int j = 1;
    int mealpay = 0;
    for (; j < N + 1; j ++) {         //优先选择餐费少的成员，从小到大依次相加判断
        mealpay += A[j - 1];          //餐费总和
        int fare = 0;
        fare = (j / K) * C;
        if (j % K != 0) {
            fare += C;
        }
        int sum = mealpay + fare;
        if (sum > B) {
            cout << j - 1;
            return 0;
        }
        if (j == N) {
            cout << j;
        }
    }
    return 0;
}