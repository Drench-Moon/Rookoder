#include <iostream>
#include <string>
using namespace std;
int main(){
    int N;
    cin >> N;
    unsigned long long fip[N];
    fip[0] = 1;
    fip[1] = 1;
    for (int i = 2; i < N; i ++){
        fip[i] = (fip [i - 1] + fip [i - 2]);
    }
        cout << fip[N - 1] << endl;
    return 0;
}