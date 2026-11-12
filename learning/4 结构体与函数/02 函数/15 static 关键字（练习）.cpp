#include <iostream>
#include <string>
#include <windows.h>

int * get_max1 (int arr[], int n) {
    static int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return &max;
}

int * get_max2 (int arr[], int n) {
    int * max = new int[n];
    for (int i = 1; i < n; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
    return max;
}
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    int arr[5];
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    int * sum1 = get_max1 (arr, 5);
    int * sum2 = get_max2 (arr, 5);
    cout << sum1 << endl;
    cout << sum2 << endl;
    cout << *sum1 << endl;
    cout << *sum2 << endl;
    return 0;
}