#include <iostream>
#include <random>
using namespace std;

int gcd(int a, int b){
    if(b == 0)return a;
    else return gcd(b,a%b);
}

int random(int min, int max) {
    std :: random_device rd;
    std :: mt19937 gen(rd());
    std :: uniform_int_distribution<> dis(min, max);
    int random_number = dis(gen);
    return random_number;
}

int main(){
    int i;
    cin >> i;
    string inp[i];
    for (int j = 0; j < i; j++) {
        cin >> inp[j];
        random(0 , inp[j].length());
    }
    

    return 0;
}