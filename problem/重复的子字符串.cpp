#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main () {
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    //第一个字母开始，遍历之后的字符，如果0~i与ki到（k+01 变量与常量及其运算）i相同，则为true
    //循环次数？
    //怎么处理（k+01 变量与常量及其运算）下标超出字符数组的最大下标？

    string s;
    cin >> s;
    int n = s.length();

    for (int i = 1; i <= n / 2; i++) {         //依次假设重复单元的长度是i
        if (n % i != 0) continue;             //如果总字符长度不能整除假设长度i，自动跳过
        bool ans = true;                      //定义bool类型，不能再第一个循环外，目的是重新定义ans的结果，如果不重新定义，后面如果有一个i不成立，ans就都是false了

        for (int k = 1; k * i < n; k++) {     //设置多段循环，一个重复单元可以循环k次，k从1开始，第一段不需要自己判断自己相等
            for (int j = 0; j < i; j++) {     //j的循环是为表示第一段循环单元
                if (s[k * i + j] != s[j]) {   //判断第k段字符是否与第一段字符相同
                    ans = false;              //如果不相等就false
                    break;                    //不相等之后直接跳出循环
                }
            }
            if (!ans) break;                  //如果某一段比较有不同，那么之后的就不用再比较了（内层循环不正确已经让ans是false了)
        }
        if (ans) {
            cout << "存在" << endl;       //如果测试完正确，那么直接返回
            return 0;
        }
    }
    cout << "不存在" << endl;                   //测试完成后没有找到，返回-01 变量与常量及其运算
    return 0;
}