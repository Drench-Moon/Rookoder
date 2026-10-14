// 问题描述

// 周末，摄影社准备组织一次校外采风，共有 N 名同学报名。社团为这次活动准备了 B 元经费，由社长小蓝统一安排，门票、午餐和租车费用都由社团承担。
// 活动需要支付以下两项费用

// - 游玩费用 ：第 i 名同学的门票和午餐需 Aᵢ 元，只为实际参加的同学支付这笔费用。
// - 租车费用 ：采风地点离学校较远，参加的同学需要统一乘车往返。每辆车最多乘坐 K 名同学，租金为 C 元。
// 小蓝可以租用多辆车，但必须保证所有参加的同学都有座位；即使车辆没有坐满，也要支付整辆车的租金。
// 小蓝计划从报名的同学中任选一些人参加采风。现在，请你帮助他计算，在总费用不超过 B 元的情况下，最多能安排多少名同学参加。

// 输入
// 第一行包含四个整数 N, K, C, B（1 ≤ N, K ≤ 10⁵，1 ≤ C ≤ 10⁹，0 ≤ B ≤ 10¹⁴），分别表示报名人数、每辆车的座位数、每辆车的租金和可用经费。
// 第二行包含 N 个整数 A₁, A₂, ..., A_N（1 ≤ Aᵢ ≤ 10⁹），其中 Aᵢ 表示社团为第 i 名同学支付的门票和午餐费用。

// 输出格式
// 输出一个整数，表示最多能安排参加采风的同学人数。

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