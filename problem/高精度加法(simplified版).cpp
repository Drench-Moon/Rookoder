#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string a, b, res;         //a b 是两个加数, res用于储存最终结果
    cin >> a >> b;
    int i = (int)a.size() - 1, j = (int)b.size() - 1, carry = 0;     //倒序读加数, 不用反转, 初始进位为0
    while (i >= 0 || j >= 0 || carry > 0) {          //有数没读完或者有进位没加完
        int s = carry;       //存上一轮的进位
        //不一定要两个数的位数同时运算，从而不一定要保证两个数的位数相同（不用补充前导0）, 可以对两个加数的各个数位分别相加
        if (i >= 0) s += a[i--] - '0';
        if (j >= 0) s += b[j--] - '0';
        res += char(s % 10 + '0');            //用字符串拼接符+来连接每一位的数字
        carry = s / 10;                       //进位改变
    }

    reverse(res.begin(), res.end());
    cout << res << endl;
}