#include <iostream>
using namespace std;


int main() {
    //学生数据
    int num;
    cin >> num;        //数据个数

    int stu[num];      //用数组记录多个数据

    for (int i = 0; i < num; i++) {
        cin.getline(stu[i]);
    }
    return 0;
}
