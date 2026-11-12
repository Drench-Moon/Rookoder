#include <iostream>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;

    //方法一：ACSII编码转换

    const unsigned long long len1 = s.size();
    const unsigned long long len2 = t.size();
    int sum1=0, sum2=0;
    for ( unsigned long long i = 0; i < len1; ++i) {
        sum1 += s[i];
    }
    for ( unsigned long long j = 0; j < len2; ++ j) {
        sum2 += t[j];
    }
    const char r = sum2 - sum1;
    cout << r << endl;

    //方法二：异或

    char R = 0;
    for (char c : s) R ^= c;
    for (char m : t) R ^= m;
    cout << R << endl;
    return 0;
}