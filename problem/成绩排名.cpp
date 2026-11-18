//
// Created by Drench_Moon on 2026/11/18.
//
#include <algorithm>
#include<iostream>
#include <vector>
using namespace std;

struct Student {
    int xuehao;
    string name;
    int chinese_score;
    int math_score;
    int english_score;
    int total_score;

};

int main() {
    int n;
    cin >> n;
    vector<Student> students (n);
    for (int i = 0; i < n; i++) {
        cin >> students[i].xuehao;
        cin >> students[i].name;
        cin >> students[i].chinese_score;
        cin >> students[i].math_score;
        cin >> students[i].english_score;
        students[i].total_score = students[i].chinese_score + students[i].math_score + students[i].english_score;
    }

    sort(students.begin(), students.end())
}