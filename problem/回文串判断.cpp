//
// Created by Drench_Moon on 2026/10/27.
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a;
    cin >> a;    				//输入字符串

    vector <char> v;            //转成字符数组来逆向输出
    for (char i : a){
        v.push_back(i);
    }


    string f;
    f.resize(v.size());
    int o = 0;
    for (auto i = v.rbegin(); i != v.rend(); ++ i){
        f[o] = *i;
        o ++;
    }

    cout << f << endl;
    string s = a == f ? "Yes" : "No";
    cout << s << endl;
}