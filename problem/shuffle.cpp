//
// Created by Drench_Moon on 2026/11/5.
//
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    while (cin >> s){
        int h;
        while(cin >> h){

            string s1 = s.substr(0, h);
            string s2 = s.substr(h, s.size());
            s = s2 + s1;
            cout << s2 + s1 << endl;
        }
    }

    return 0;
}