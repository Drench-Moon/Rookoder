//
// Created by Drench_Moon on 2026/10/26.
//

#include <format>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

//递归，就是函数调用自己，每一次调用，都要减小问题规模，直到能够解决
//例如已知 a_1 = 1, a_n = 1 + a_(n - 1), 求数列通项:
//不断展开a_k 最终得到an = 1 + 1 + ··· + 1 = n

//递推包括: 边界条件和递推关系，见下方伪代码
/*
   类型 函数名(声明参数){
       if(跳出递归的条件){
            return 类型;
         }
        return 函数名(参数)以及各种操作;                     //递归调用自己
   }
 */






//单链递归

//前n项和，单链递归
int cumsum(int a) {
    if (a == 1) {                                      //1是边界，不定义的话a - 1 会越界
        return 1;
    }
    return a + cumsum(a - 1);                             //递推关系 + 问题变小(n变成n - 1)
}

//数组的前len个元素和，单链递归
int arrsum(vector<int> &v, int len) {                    //引用数组v，否则是值传递，导致运行时间过长
    if (len == 0) {                                      //边界是0, len - 1越界
        return 0;
    }
    return v[len - 1] + arrsum(v, len - 1);
}








//先递后归


//逆序打印字符串, 先递后归
void preverse(string &v, int i) {
    if (i - 1 < 0 || i > v.size()) {                //初始赋值超出范围 或者 走到最后一位就返回，但返回空，没有返回值
        return;
    }
    preverse(v, i + 1);                                   //继续往后走，先输出后面的字符，直到i = v.size(), 返回空，开始输出s[i - 1]，接着是s[i - 2]，一直到s[i]， i初始是几，就从第几个数位开始倒序打印
    cout << v[i - 1] << " ";
}




//双分支递归

//分治求最大值

int maxof(const vector<int> &v, int l = 0, int r = -1) {
    if (r < 0) {                     //r小于 0 时都默认为整个数组
        r = v.size();
    }
    if (l == r - 1) {                //如果区间只剩一个元素，那么直接返回
        return v[l];
    }
    else {
        int mid = l + (r - l) / 2;              //计算中点，这样表示可以防止l + r溢出
        return max(maxof(v, l, mid), maxof(v, mid, r));
    }
}






//带状态递归、双分支递归

//二分查找
//函数调用前提：数组经过排序！！！！
int binarySearch(vector<int> &v, int l, int r, int x) {
    if (l > r) {
        return -1;                 //如果传入参数l > r 说明区间已经是空，故返回 -1
    }
    int mid = l + (r - l) / 2;         //找中点，并防止int溢出
    if (v[mid] == x) {                 //如果命中，直接返回
        return mid;
    }
    if (v[mid] > x) {             //如果中点在x右侧，说明查找值只可能在左侧，那么返回左侧二分递归
        return binarySearch(v, l, mid - 1, x);
    }
    return binarySearch(v, mid + 1, r, x);            //同上，返回右侧查找, -1和+1保证每次递归都能缩小作用规模
}

//回忆 + 默写
int halfsearch(vector<int>&v, int l, int r, int x) {
    if (l > r) {
        return -1;
    }
    int mid = l + (r - l) / 2;
    if (v[mid] == x) {
        return mid;
    }
    else if (v[mid] < x) {
        return halfsearch(v, mid + 1, r, x);
    }
    else {
        return halfsearch(v, l ,mid - 1, x);
    }
}
using namespace std;
int main() {

    int k = cumsum(5);
    cout << k << endl;


    vector<int> v = {1, 2, 5, 1, 2};
    int l = arrsum(v, 2);
    cout << l << endl;


    string s = "123456789";
    preverse(s, 4);                       //从第4位开始倒序输出，987654
    cout << endl;

    vector<int> v1 = {109, 81, 552, 2, 459};
    int f = maxof(v1);
    cout << f << endl;


    vector<int> king = {1, 234, 456, 82, 9, 0, 12, -123, -51, 10, -2, -12, 234, 2, 3, 4, 5, 1, 16, 8, 32458, -245, 89, 2, 11, 15, 51, 23, -132, 26, 65, 74, 77, 70, 11};
    sort(v.begin(), v.end());
    int returning = binarySearch(king, 0, static_cast<int>(king.size()) - 1, 0);
    cout << returning << endl;
    return 0;

    
}