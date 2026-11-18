//
// Created by Drench_Moon on 2026/11/17.
//
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;                         //n行, m列

    vector<string> a(n);                   //每行输入都以字符串表示
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool black = false, white = false;     //判断胜方的变量

    if (m < 5 && n < 5) {
        cout << "None" << endl;
        return 0;
    }

    if (m >= 5) {
        //对于每行来判断
        for(int i = 0; i < n; i ++){                      //每行
            for(int j = 0; j <= m - 5; j ++){             //每列, 至多到第 m-5 列
                int num = 0;
                for(; num < 5; num ++){                   //连续5个和起点相同
                    if(a[i][j + num] != a[i][j]) break;
                }

                if(num == 5) {
                    if (a[i][j] == 'B') {
                        black = true;        //起点为黑色时
                    }
                    else if (a[i][j] == 'W') {
                        white = true;        //起点是白色时
                    }
                }
            }
        }


        if (n >= 5) {
            //  其他情况都要求n >= 5
            //
            //  对于每列来判断
            for (int i = 0; i <= n - 5; i ++) {                //每行, 至多到第 n - 5 行
                for (int j = 0; j <= m; j ++) {               //每列
                    int num = 0;
                    for(; num < 5; num ++) {             //连续五个和第一个相同
                        if(a[i + num][j] != a[i][j]) break;
                    }

                    if (num == 5) {
                        if (a[i][j] == 'B') {
                            black = true;
                        }
                        else if (a[i][j] == 'W') {
                            white = true;
                        }
                    }
                }
            }


            //对于y = -x平行向

            for (int i = 0; i <= n - 5; i ++) {
                for (int j = 0; j <= m - 5; j ++) {
                    int num = 0;
                    for(; num < 5; num ++) {
                        if (a[i + num][j + num] != a[i][j]) break;          //向右下方移动
                    }
                    if (num == 5) {
                        if (a[i][j] == 'B') {
                            black = true;
                        }
                        else if (a[i][j] == 'W') {
                            white = true;
                        }
                    }
                }
            }


            //对于y = x 平行向
            for (int i = 0; i <= n - 5; i ++) {
                for (int j = m - 1; j >= 4; j --) {
                    int num = 0;
                    for(; num < 5; num ++) {
                        if(a[i + num][j - num] != a[i][j]) break;
                    }
                    if (num == 5) {
                        if (a[i][j] == 'B') {
                            black = true;
                        }
                        else if (a[i][j] == 'W') {
                            white = true;
                        }
                    }
                }
            }
        }
    }


    if (black && white) {
        cout << "Both" << endl;
    }
    if (black && !white) {
        cout << "Black" << endl;
    }
    if (!black && white) {
        cout << "White" << endl;
    }
    if (!black && !white) {
        cout << "None" << endl;
    }
    return 0;

}


