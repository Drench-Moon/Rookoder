#include <iostream>
using namespace std;

void judge(string gender, string name, int age) {
    cout << "judging..." << endl;
    cout << "You're a gay." << endl;
}
int main () {
    string gender;
    string name;
    int age;

    cout << "Enter your gender: " << endl;
    cin >> gender;

    cout << "Enter your name: " << endl;
    cin >> name;

    cout << "Enter your age: " << endl;
    cin >> age;

    judge ("male", "female", 10);
}
