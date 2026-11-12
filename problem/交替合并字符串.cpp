/*
*给你两个字符串 word1 和 word2 。请你从 word1 开始，
*通过交替添加字母来合并字符串。如果一个字符串比另一个字符串长，
*就将多出来的字母追加到合并后字符串的末尾。
8返回 合并后的字符串。
*/

#include <iostream>
using namespace std;

int main() {
    const string word1 = "cnp";
    const string word2 = "dm";
    const unsigned long long len1 = word1.size();
    const unsigned long long len2 = word2.size();
    unsigned long long minlen = len1;
    unsigned long long maxlen = len2;
    if (len2 <= len1){
        minlen = len2;
        maxlen = len1;
    }
    string comb;
    for (int i = 0; i < minlen; i ++){
        comb += word1[i];
        comb += word2[i];
    }
    for  (unsigned long long j = minlen; j < maxlen; j ++) {
        if (len1 > len2) {
            comb += word1[j];
        }
        else {
            comb += word2[j];
        }
    }
    cout << comb << endl;
}

