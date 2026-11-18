#include <iostream>
using namespace std;


int main() {

    int j = 0;
    int * p = &j;
    cout << p << endl;
    cout << *p << endl;
    int ** p1 = &p;
    cout << p1 << endl;
    cout << *p1 << endl;
    cout << **p1 << endl;
    return 0;
}