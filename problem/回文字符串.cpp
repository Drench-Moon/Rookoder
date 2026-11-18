//
// Created by Drench_Moon on 2026/11/17.
//
#include <iostream>
#include <vector>
using namespace std;
bool isPalindrome(const string &s, int l, int r){
    if(l >= r) return true;
    if(s[l] != s[r]) return false;
    return isPalindrome(s, l + 1, r - 1);
}

int main(){
    int n;
    cin >> n;
    vector<string> a(n);
    for(int i = 0; i < n; i ++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i ++){
        cout << (isPalindrome(a[i], 0, int(a[i].length() - 1))? "yes" : "no") << endl;
    }
}