#include <iostream>
#include <string>
#include <windows.h>


using namespace std;
void func1(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
}

template <int N>
void func2(int (&arr)[N]){
    for (const int i : arr) {
        cout << i << endl;
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    /*
     *void func(int arr[]);
     *void func(int arr[10]);
     *void func(int *arr);
     *三者完全一致，无论哪种方式，arr均被视为指针(地址传递)
     *
     * - 函数体内，sizeof无法统计数组大小，得到的只能是指针大小(数组的第一个元素的地址，8字节)
     * - 函数接受数组传入，一般建议附带数组长度
     */

    int arr[2] = {1, 2};
    func1(arr, 2);

    func2(arr);
    return 0;


}