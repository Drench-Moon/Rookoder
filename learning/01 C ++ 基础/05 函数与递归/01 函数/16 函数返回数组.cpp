#include <iostream>
#include <string>
#include <windows.h>

int * func1() {
    int * arr = new int[5]{1,2,3,4,5};
    return arr;
}

int * func2() {
    static int arr[] ={1,2,3,4,5};
    return arr;
}

int arr[5] = {1,2,3,4,5};
int * func3() {
    return arr;
}



using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    int * ret1 = func1();
    int * ret2 = func2();
    int * ret3 = func3();
    cout << ret1 << " " << ret2 << " " << ret3 << endl;
    cout << ret1[1] << " " << ret2[1] << " " << ret3[1] << endl;
    delete ret1;
    return 0;
}