#include <iostream>
#include <string>
using namespace std;
int main(){
    string W, T;
    cin >> W;
    cin.ignore();
    getline(cin, T);
    int num = 0;
    for (auto i = 0; i <= int(T.length()) - int(W.length()); ++i) {

        if (bool find = T.compare(i, int(W.size()), W) == 0) {
            num ++;
        }
    }
    cout << num << endl;
    return 0;
}