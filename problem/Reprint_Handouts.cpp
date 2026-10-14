// 讲义补印
#include <iostream>
using namespace std;
int main()
{
    // 请在此输入您的代码
    long long N, L, R;
    cin >> N >> L >> R;
    long long Nrest = N % 2;                                             //判断尾页奇偶性质

    long long Minus = R - L + 1, Lrest = L % 2, Rrest = R % 2;           //计算起始页和结束页间隔，判断起始页与结束页的奇偶性

    long long Page = 0, Sheet, Normal = 0;                                       //页数、纸张数、加印正常页数


    if (L != N){                                                         //L不是尾页时

        if (Lrest == 0 && Rrest == 1){                                   //如果L为偶数，R为奇数, 则Page = Minus + 2, Normal = 2
            Page = Minus + 2;
            Normal = 2;
        }

        else if (Lrest == 1 && Rrest == 1){                              //如果L为奇数，R为奇数, 则Page = Minus + 1, Normal = 1
            Page = Minus + 1;
            Normal = 1;
        }

        else if (Lrest == 1 && Rrest == 0){                              //如果L为奇数，R为偶数, 则Page = Minus, Normal = 0
            Page = Minus;
            Normal = 0;
        }

        else {                                                           //如果L为偶数，R为偶数, Page = Minus + 1, Normal = 1
            Page = Minus + 1;
            Normal = 1;
        }


        if (R == N && Nrest == 1){                                       //如果R为尾页且N为奇数，则最后一页空白不需要多印一次
                Page --;
                Normal --;
        }
    }

    else{                                                                //L是尾页时，N奇不多印，N偶多一页
        if(Nrest == 0){
            Page = Minus + 1;
            Normal = 1;
        }
        else if (Nrest == 1) {
            Page = Minus;
            Normal = 0;
        }
    }


    if(Page % 2 == 1){
        Sheet = Page / 2 + 1;
    }
    else{
        Sheet = Page / 2;
    }
    cout << Sheet << " " << Normal << endl;
    return 0;
}
