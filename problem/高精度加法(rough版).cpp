#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string num1, num2;
    cin >> num1 >> num2;
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());
    string longstring = num1.size() >= num2.size() ? num1 : num2;
    string shortstring = num1.size() >= num2.size() ? num2 : num1;
    string sum (longstring.size() + 1, '0');
    unsigned long long diff = longstring.size() - shortstring.size();
    for (int i = 0; i <= diff; i++) {
        shortstring.push_back('0');
    }
    longstring.push_back('0');
    int length = shortstring.size();
    int add = 0;
    for (int i = 0; i < length; i++) {
        int temp = shortstring[i] + longstring[i] - '0' - '0' + add;
        sum[i] = char('0' + temp % 10);
        add = (temp) / 10;
    }

    reverse(sum.begin(), sum.end());
    if (sum.front() == '0') {
        sum.erase(sum.begin());
    }
    cout << sum << endl;
}