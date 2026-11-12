#include "iostream"
using namespace std;

int main()
{
    cout.width(2);
    string Major = "Physic" ;
    string Class = "1 变量与常量及其运算 class" ;
    string Name = "Ming Xiao" ;
    string Msg = "My descipline is:  " + Major + ", I'm from " + Class + ", My name is "+ Name ;
    cout << Msg << endl ;


    cout << "----------------" << endl;

    // When the information isn't string, we are supposed to use function: to_string, like:
    string name = "Lisa";
    int Age = 21;
    double Height = 181.50;
    string msg = "I am: " + name +", my height is " + to_string(Height) + "cm, my age is " + to_string(Age);
    cout << msg << endl;
    return 0;
}

