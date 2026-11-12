#include <iostream>
using namespace std;
int main () {

    int * arr = new int[5]{5,4,3,2,1};
    //创建一个新的数组，将需要的数组元素复制到新的数组当中

    int * newarr = new int[4];

    //循环去遍历老数组，将需要的元素放入新的数组当中（需要移除的要跳过）
    for (int i = 0; i < 5; i ++) {
        if (i == 2) {
            continue;
        }
        if (i > 2) {
            newarr [i-1] = arr[i];
        }else {
            newarr [i] = arr[i];
        }
    }
    //可选

    delete[] arr;       //回收老数组的空间

    //可选

    arr = newarr;       //将老数组的指针指向新数组的内存空间
    int j = 0;
    for (; j < 4; j ++) {
        cout << *(newarr + j) << endl;
        cout << arr[j] << endl;              //现在两个不同的指针指向同一个内存空间
    }
    return 0;
}