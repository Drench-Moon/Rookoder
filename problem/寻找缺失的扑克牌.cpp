//
// Created by Drench_Moon on 2026/11/3.
//
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<vector<int>> pok(4, vector<int>(13));
    for(int i = 0; i < n; ++i) {
        char f;
        int p;
        cin >> f >> p;

        //count arr
        switch(f){
            case 'S':
                pok[0][p - 1]++;
                break;
            case 'H':
                pok[1][p - 1]++;
                break;
            case 'C':
                pok[2][p - 1]++;
                break;
            case 'D':
                pok[3][p - 1]++;
                break;
            default:
                break;
        }
    };

    //traversal arr
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 13; ++j) {
                if (pok[i][j] != 1){              //if not counted
                    switch (i) {
                        case 0:
                            cout << "S " << j + 1 << endl;
                            break;
                        case 1:
                            cout << "H " << j + 1 << endl;
                            break;
                        case 2:
                            cout << "C " << j + 1 << endl;
                            break;
                        case 3:
                            cout << "D " << j + 1 << endl;
                            break;
                        default:
                            break;
                    }
                }
            }
        }

    return 0;
}