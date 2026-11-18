#include <iostream>
using namespace std;

void st1 () {
    cout << 1 << endl;
}
void st2 () {
    cout << 2 << endl;
}
void st3 () {
    cout << 3 << endl;
}
void st4 () {
    cout << 4 << endl;
}
void st5 () {
    cout << 5 << endl;
}
void st6 () {
    cout << 6 << endl;
}
void st(int num) {
    switch (num) {
        case 1:
            st1();
            st6();
            break;
        case 2:
            st2();
            st5();
            break;
        case 3:
            st3();
            st4();
            break;
        default:
            cout << "?" << endl;

    }

}
int main () {
    int x;
    cin >> x;
    st(x);
    st(1);
}