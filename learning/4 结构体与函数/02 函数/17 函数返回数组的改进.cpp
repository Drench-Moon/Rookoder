#include <iostream>
using namespace std;

//函数传入数组的改进
// 1 变量与常量及其运算、调用前接受数组指针传入
// 2 循环与分支语句、调用函数前自行创建数组
// 3 数组与指针、传入数组到函数中进行操作

void plus_one (int arr[], int length) {
    for (int i = 0; i < length; i++) {
        arr[i] ++;
    }
}
int main() {
    int arr[3];
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
    }
    plus_one(arr, 3);
    for (const int i : arr){
        cout << i << " ";
    }
    return 0;
}