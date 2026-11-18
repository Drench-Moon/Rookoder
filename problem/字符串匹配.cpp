#include <iostream>
#include <string>
using namespace std;

int main(){
    string S, P;
    getline(cin, S);            //gerline 可以包含空字符
    getline(cin, P);

    for (int i = 0; S[i] != '\0'; i ++){         //遍历S
        int j = 0;
        for (; P[j] != '\0' && S[i + j] == P[j]; j ++)       //在空字符之前，如果S与P字符相同，遍历P。其中循环控制因子兼有记录匹配字符个数的功能

        if (P[j] == '\0') {
            cout << "Yes" << endl;
            return 0;                                        //只要有完全匹配就立刻退出
        }
    }
    cout << "No" << endl;                                   //如果没有匹配，应当在循环之外（保证所有字符均检测一次）再输出No
    return 0;
}