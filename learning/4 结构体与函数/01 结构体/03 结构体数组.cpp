#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main () {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    /*
    结构体数组声明数组对象：
          struct 结构体类型 数组名 [数组长度]
    赋值元素
            数组名[0] = {, , ,...};
            数组名[1 变量与常量及其运算] = {, , ,...};
            ......

    声明和赋值同步：
          struct 结构体类型 数组名 [数组长度] = {{},{},{},...}
    */
    struct Game {
        string name;
        int age{};
        string favor;
    };
    struct Game Game [3];
    Game[0] = {"Genshin_Impact", 6,"like"};
    Game[1] = {"Honor of King", 15,"like"};
    Game[2] = {"Minecraft", 25,"like"};
    for (auto i : Game) {
        cout << i.name << endl;
        cout << i.age << endl;
        cout << i.favor << endl;
        cout << endl;
    }


    string Game1[] = {"Minecraft","16","like"};
    for (auto i  : Game1) {
        cout << i << endl;
    }
    cout << endl;


    struct Game Game2 [3] {
        {"LYSK",78,"hatred"},
        {"Dynamic Knight",520,"like"},
        {"Volarant",10,"like"}
    };
    for (int i = 0; i < 3; i ++) {
        cout << Game2[i].name << endl;
        cout << Game2[i].age << endl;
        cout << Game2[i].favor << endl;
        cout << endl;
    }

    struct Game Game3 [2][2] {
        {{"q",2,"Q"},{"1 变量与常量及其运算",1,"1 变量与常量及其运算"}},
        {{"3 数组与指针",3,"3 数组与指针"},{"2 循环与分支语句",2,"2 循环与分支语句"}},
    };

    for (auto & i : Game3) {
        for (const auto j : i) {
            cout << j.name << endl;
            cout << j.age << endl;
            cout << j.favor << endl;
            cout << endl;
        }
    }
    return 0;
}