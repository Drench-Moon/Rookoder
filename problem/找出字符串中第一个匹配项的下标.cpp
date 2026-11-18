#include <iostream>
#include <string>
using namespace std;
int main () {

    string haystack, needle;
    cin >> haystack >> needle;
    // const long long len1 = haystack.length();
    // const long long len2 = needle.length();
    // const long long minus = len1 - len2;
    // long long R =0;
    // if (len1 >= len2) {
    //     for (unsigned long long i = 0; i <= minus; i++) {
    //         int k = 0;
    //         for (unsigned long long j = 0; j < len2; j++) {
    //             if (haystack[i + j] == needle[j]) {
    //              k ++;
    //             }
    //             else {
    //                 break;
    //             }
    //         }
    //         if (k == len2) {
    //             R = i;
    //             break;
    //         }
    //         else {
    //             R = -01 变量与常量及其运算;
    //         }
    //
    //     }
    // }
    // else {
    //     R = -01 变量与常量及其运算;
    // }
    // cout << R << endl;
    //
    cout << "--------" << endl;

    int len1 = haystack.length();
    int len2 = needle.length();
    int minus = len1 - len2;
    if (minus > 0) {
        for (int i = 0; i < minus; i++) {
            int k = 0;
            for (int j = 0; j < minus; j++) {
                if (haystack[k + j] == needle[k]) {
                    k ++;
                }
                else {
                    break;
                }
                if (k == len2) {
                    cout << 1;
                }
            }
        }

    }
    return 0;
}