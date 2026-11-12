#include <iostream>
#include <string>
#include <windows.h>


using namespace std;
int main() {
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    int s = 5;
    int * pArr = new int[s];
    for (int i = 0; i < s; i++) {
        cin >> pArr[i];
    }


    for (int i = 0; i < s - 1; i++) {                     //前 9 个位置都确定后，最后剩下的那个数自然就是最大的，不需要再次循环
        int minidx = i;                                   //先假设未排序部分的第一个数就是最小的，并记录下标
        for (int j = i + 1; j < s; j++) {                 //每找到一个最小值放到首位之后，需要排除这个数，再在剩下的数中寻找最小值，寻找需要全部遍历，不能少，循环条件是j<s
            if (pArr[minidx] > pArr[j]) {
                minidx = j;                               //找到更小数就更换索引下标
            }
        }
        if (minidx != i) {                                //如果索引下标更换，说明最小值不是最初假设，需要交换最小值到首位
            int temp = pArr[i];                           //把i位置的数赋值到空房间
            pArr[i] = pArr[minidx];                       //把最小值放到i位置
            pArr[minidx] = temp;                          //把原来i位置的数赋值到原来最小值的位置
        }
    }
    for (int i = 0; i < s; i++) {
        cout << pArr[i] << "\n";
    }
    delete [] pArr;
    return 0;
}