#include <iostream>
using namespace std;

static void k23(const string& s = "Nothing is input") {   //函数的默认值是"Nothing is input"
    cout << s << endl;
}

static void kskbl(const int a, int b = 3, int c = 4) {       //提供默认值的参数右侧的参数也必须提供默认值
    cout << a << " " << b << " " << c << endl;
}
int main(){
    k23();
    kskbl(5);           //  534
    kskbl(1,3);      //  133
    kskbl(2,4);      //  赋值的时候也不能跳过b来赋值，c++编译不支持跳过中间参数，如果想让b使用默认值，c赋值，只有修改函数中bc的前后位置
    return 0;
}