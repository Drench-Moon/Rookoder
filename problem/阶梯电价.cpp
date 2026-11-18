#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double cha;
    cin >> cha;
    
    double cost = 0;
    double rest = 0;
    
    if (cha < 0){
        cout << "Error";
        return 0;
    }
    cout << fixed << setprecision(2);
    if (cha <= 2160){
        cost = cha * 0.55;
    }
    else if (cha > 2160 && cha <= 4200){
        rest = cha - 2160;
        cost = 2160 * 0.55 + rest * 0.60;
    }
    else if  (cha > 4200){
        rest = cha - 4200;
        cost = 2160 * 0.55 + (4200 - 2160) * 0.60 + rest * 0.85;
    }
    cout << cost;
    return 0;
}