#include <iostream>
using namespace std;
int main () {
    int S;
    cin >> S;
    int h = S/3600;
    int r1 = S%3600;
    int m = r1/60;
    int r2 = r1%60;
    int s = r2;
    cout << h << ":" << m << ":" << s << endl;
}