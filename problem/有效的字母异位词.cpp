#include <iostream>
#include <string>
using namespace std;
int main () {
    string s, t;
    cin >> s >> t;
    int len1 = s.length();
    int len2 = t.length();
    bool R = true;
    int cnt[26] = {0};
    for (char c : s) {cnt[c - 'a']++;}
    for (char c : t) {cnt[c - 'a']--;}
    for (int i : cnt)
        if (i != 0){R = "false";}
    cout << R << endl;
    return 0;
}