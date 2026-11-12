//
// Created by Drench_Moon on 2026/10/27.
//

#include <iostream>
using namespace std;
int main() {
    /*
    构造函数: 类型和函数名相同的函数.
    语法:

    类名(参数列表) : 初始化列表 {
        函数体
    }

    一般在类(class) 或者结构体(struct) 里造
    类名必须和类或者结构体名称完全相同
    无返回类型, void也不能写
    ":" 冒号作用  初始化列表的引导符，可省略(省略时就没有初始化列表)
    函数体{}可以为空, 初始化也算一种操作, 函数体内的东西是初始化之后额外需要做的

    */

    struct Point {
        int x;
        int y;
        Point() : x(0), y(0) {}
    };
    Point p;              //调用初始化构造
    //默认值和初始化都可以算作初始化，只有优先级的关系



    class Point1 {
        public:
        int x = 0;       //成员默认值
        int y = 1;

        Point1(int a) : x(a) {}
    };

    Point1 po(2);                //声明了一个名为po的变量, 生命周期到程序结束
    cout << po.x << " " << po.y << endl;  //x是参数a(这里是2)， y没有初始化, 就用结构体的默认值y = 1
    int k = Point1(2).x;         //用k获取一个临时变量的x值(参数为2, x就为2), 到分号处立刻销毁
    cout << k << endl;



    //委托构造
    struct Point3 {
        int x, y;
        Point3(int a, int b) : x(a), y(b) {}
        Point3() : Point3(0, 0) {}      // 委托给上面那个，这个无参构造不做初始化，把初始化工作全部交给Point(int, int)去做，参数传 0 和 0
        //如果主构造函数没有主结构，那么上面这行代码就相当于把函数初始化为0，0
    };


    cout << endl;
    //重载，多个构造函数根据特点选择调用哪个
    struct Point4 {
        int x, y;
        Point4()             : x(0), y(0) {}    // 无参
        Point4(int a)        : x(a), y(0) {}    // 一个参数
        Point4(int a, int b) : x(a), y(b) {}    // 两个参数
    };

    Point4 p1;          // 选第 1 个
    Point4 p2(5);       // 选第 2 个
    Point4 p3(5, 8);    // 选第 3 个
    cout << p1.x << " " << p1.y << endl;          //(0,0)
    cout << p2.x << " " << p2.y << endl;          //(0,0)
    cout << p3.x << " " << p3.y << endl;          //(5,8)


    cout << endl;

    //初始化按照成员声明顺序，如果反过来可能导致垃圾值等
}


//类外定义不能写在函数里面，只能写在 全局作用域(所有函数, 包括main的外面)
struct Point2 {
    int x, y;
    Point2(int a, int b);      //声明一下，告诉编译器，这个函数有两个参数, 但只是声明了一下, 没有给函数参数
};
Point2::Point2(int a, int b) : x(a), y(b) {}
