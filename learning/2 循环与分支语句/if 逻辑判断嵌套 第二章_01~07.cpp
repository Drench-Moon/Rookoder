#include <iostream>
#include <string>
#include <windows.h>


using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);    // cout 中文乱码转译
    SetConsoleCP(CP_UTF8);          // cin GBK编码转换UTF_8

    cout << "你好，我能问你题吗？\n请回复\"能\"或\"不能\"" << endl;
    string REPLY;
    cin >> REPLY;
    string reply;

    if (REPLY == "能") {
        cout << "好的，这道多选题选什么" << endl;
        cin >> reply;
        if (reply == "AB")
        {
            cout << "你真厉害，这都能做对" << endl;
        }
        else if (reply == "A")
        {
            cout << "还有一个选项" << endl;
        }
        else if (reply == "B")
        {
            cout << "还有一个选项" << endl;
        }
        else
        {
            cout << "啊？答案是AB啊，你要不再看一下吧" << endl;
        }
    }
    else
    {
        cout << "抱歉，打扰你了" << endl;
    }
    return 0;
}