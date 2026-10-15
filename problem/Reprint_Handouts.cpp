// 问题描述
// 大学课程需要使用讲义，小蓝负责打印一份共有 N 页的材料。讲义采用双面打印：第 1、2 页印在第一张纸的正反面，第 3、4 页印在第二张纸的正反面，依此类推。
// 如果最后只剩一页，就只印在最后一张纸的正面，背面留空。
// 检查时，小蓝发现第 L 页到第 R 页的内容没有印清楚，其余页面都没有问题。他需要更换所有印有这些页面的纸张，并按原来的页码重新打印。
// 更换一张纸时，这张纸上的正常页面也需要重新打印；空白面不算页面。
// 请你帮助小蓝计算，需要补印多少张纸，以及有多少页原本正常的内容会被一同重新打印。
// 输入格式
// 输入一行，包含三个整数 N, L, R（1 ≤ L ≤ R ≤ N ≤ 10⁹），分别表示讲义总页数、没有印清楚的起始页码和结束页码。
// 输出格式
// 输出两个整数，用一个空格分隔，分别表示需要补印的纸张数和一同重新打印的正常页数。

#include <iostream>
using namespace std;
int main()
{
    // 请在此输入您的代码
    long long N, L, R;
    cin >> N >> L >> R;
    long long Nrest = N % 2;                                             //判断尾页奇偶性质

    long long Minu = R - L + 1, Lrest = L % 2, Rrest = R % 2;           //计算起始页和结束页间隔，判断起始页与结束页的奇偶性

    long long Page = 0, Sheet, Normal = 0;                                       //页数、纸张数、加印正常页数


    if (L != N){                                                         //L不是尾页时

        if (Lrest == 0 && Rrest == 1){                                   //如果L为偶数，R为奇数, 则Page = Minus + 2, Normal = 2
            Page = Minu + 2;
            Normal = 2;
        }

        else if (Lrest == 1 && Rrest == 1){                              //如果L为奇数，R为奇数, 则Page = Minus + 1, Normal = 1
            Page = Minu + 1;
            Normal = 1;
        }

        else if (Lrest == 1 && Rrest == 0){                              //如果L为奇数，R为偶数, 则Page = Minus, Normal = 0
            Page = Minu;
            Normal = 0;
        }

        else {                                                           //如果L为偶数，R为偶数, Page = Minus + 1, Normal = 1
            Page = Minu + 1;
            Normal = 1;
        }


        if (R == N && Nrest == 1){                                       //如果R为尾页且N为奇数，则最后一页空白不需要多印一次
                Page --;
                Normal --;
        }
    }

    else{                                                                //L是尾页时，N奇不多印，N偶多一页
        if(Nrest == 0){
            Page = Minu + 1;
            Normal = 1;
        }
        else if (Nrest == 1) {
            Page = Minu;
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
//.