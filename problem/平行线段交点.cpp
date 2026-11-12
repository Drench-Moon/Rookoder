//
// Created by Drench_Moon on 2026/10/28.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;                   //输入n以及所有坐标，定义为 n组 两个 二维 坐标，即一个 （n，2，2） 三维数组
    vector<vector<vector<int>>> sto(n, vector<vector<int>>(2, vector<int>(2, 0)));


    long long  spy = 0, spx = 0;

    for (long long i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cin >> sto[i][j][k];
            }
        }

        //统计平行于x和y轴的个数
        if (sto[i][0][0] == sto[i][1][0]) {                 //x相等，平行y轴
            spy ++;                                         //平行于y轴的线段数
        }
        else if (sto[i][0][1] == sto[i][1][1]) {                 //y相等，平行x轴
            spx ++;                                         //平行于x轴的线段数
        }
    }




    vector<vector<vector<int>>> pxl(spx, vector<vector<int>>(2, vector<int>(2,0)));
    vector<vector<vector<int>>> pyl(spy, vector<vector<int>>(2, vector<int>(2,0)));


    //把平行于x和y轴的线段端点分别记录到两个三维数组中
    int j = 0, r = 0;
    for (int i = 0; i < n; i++){
        if (sto[i][0][0] == sto[i][1][0]) {              //x相同，平行于y
            // pyl[j][0][0] = sto[i][0][0];
            // pyl[j][0][1] = sto[i][0][1];
            // pyl[j][1][0] = sto[i][1][0];
            // pyl[j][1][1] = sto[i][1][1];
            pyl[j] = sto[i];
            j ++;
        }
        else if (sto[i][0][1] == sto[i][1][1]) {        //y相同，平行于x
            // pxl[j][0][0] = sto[i][0][0];
            // pxl[j][0][1] = sto[i][0][1];
            // pxl[j][1][0] = sto[i][1][0];
            // pxl[j][1][1] = sto[i][1][1];
            pxl[r] = sto[i];
            r++;
        }
    }



    int sum = 0;
    //逐个扫点过于复杂，可以判断x是否在另一个x区间内即可
    for (long long i = 0; i < spx; i++) {
        //平行于x轴的线段看x的范围

        long long minx = min(pxl[i][0][0], pxl[i][1][0]);
        long long maxx = max(pxl[i][0][0], pxl[i][1][0]);
        long long Y = pxl[i][0][1];
        //
        //     for (int k = minx; k <= maxx; k++) {                       //x的范围
        //
        //
        //
        //                  //在确定一个平行于x轴线段的坐标后，遍历所有平行于y轴线段上的所有坐标，四层循环
        for (int m = 0; m < spy; m++) {                //平行于y轴的线段看y的范围

            long long miny = min(pyl[m][0][1], pyl[m][1][1]);
            long long maxy = max(pyl[m][0][1], pyl[m][1][1]);
            long long X = pyl[m][0][0];
            //
            //             for (int q = miny; q <= maxy; q++) {               //y的范围
            //
            //                 if (k == pyl[m][0][0] && pxl[i][0][1] == q) {
            //                     sum ++;
            //                 }
            //             }
            if (X >= minx && X <= maxx && Y >= miny && Y <= maxy) {
                sum ++;
            }
        }
    }


    cout << sum;
}