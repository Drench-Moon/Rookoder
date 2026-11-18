//
// Created by Drench_Moon on 2026/11/5.
//
#include <string>
#include <iostream>
using namespace std;

void replace(int a, int b, string &pre, const string &str){
    pre.erase(a, b - a + 1);
    pre.insert(a, str);
}

void reverse(int a, int b, string &pre) {
    int i = a, j = b;
    while(i < j){
        swap(pre[i], pre[j]);
        i ++, j --;
    }
}

void print(int a, int b, const string &pre) {
    for (int i = a; i <= b; i++) {
        cout << pre[i];
    }
}


using namespace std;
int main(){
    string pre;
    cin >> pre;
    int t;
    cin >> t;
    for(int i = 0; i < t; i ++){
        string command;
        cin >> command;
        if(command == "replace"){
            int a, b;
            string str;
            cin >> a >> b >> str;
            replace(a, b, pre, str);
        }
        else if(command == "reverse"){
            int a, b;
            cin >> a >> b;
            reverse(a, b, pre);
        }
        else if(command == "print"){
            int a, b;
            cin >> a >> b;
            print(a, b, pre);
            cout << endl;
        }
    }
    return 0;
}