#include <cmath>
#include <iostream>
# include <iomanip>
using namespace std;
int main () {
     long double r;
    cin >> r;
    const double PI = acos(-1);
    cout << fixed << setprecision ( 6 );
    cout << PI * r * r << " " << 2 * PI * r<<endl;

}