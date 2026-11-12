//
// Created by Drench_Moon on 2026/11/3.
//
#include <iostream>
using namespace std;

//判断字符串是否回文
bool is_palindrome(const string &i) {
    if (i.length() <= 1) {              //如果字符串为空或者长度为1, 说明递归到最后, 必然是回文字符串
        return true;
    }
    //如果字符串长度>= 2 就进行判断首位是否与尾位相同, 如果相同, 删掉首尾继续递归判断
    if (i[0] == i[i.length() - 1]) {
        string s = i.substr(1, i.length() - 2);                //substr截取函数, 从下标为1截取到下标为倒数第二个
        return is_palindrome(s);                        //递归
    }
    else {                                       //每次递归如果有不同, 就不是回文串
        return false;
    }
}

//更简单的方法, 下标版本
bool isPalindrome(const string &s, int l, int r) {        //给予左右下标, 每次只需要判断对应下标的字符是否相同
    if (l >= r) {        //递推出口: 如果剩下一个字符, 递归传参l与r相同, 如果剩下空字符, l 从k 变为k + 1，r从 k 变为k - 1, l>r
        return true;
    }
    if (s[l] != s[r]) {    //判断条件
        return false;
    }
    return isPalindrome(s, l + 1, r - 1);  //把删首尾, 转换理解为缩小被分析的字符串下标
}


//十进制转化二进制
void ToBinary(unsigned int n) {          //可以省略int, unsinged默认为int
    if (n > 1) {                         //n > 1才递归, 如果n等于1 或 0, 直接输出, 因此如果传入初始就是0, 可以输出0, 如果递归直到了最高位, 不会继续递归, 也就是先单独把最高位判断一下, 再输出后面的 
        ToBinary(n >> 1);                //n >> 1只是算出来一个新的值, 没有改变n
        cout << (n & 1);
    }
}

int main() {
    int s;
    cin >> s;
    string m = to_string(s);

    bool k = is_palindrome(m);
    cout << k << endl;

    ToBinary(s);
}