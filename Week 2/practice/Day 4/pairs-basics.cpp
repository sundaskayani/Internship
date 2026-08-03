#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair<int, string> student;

    student.first = 101;
    student.second = "Ali";

    cout << "Roll No : " << student.first << endl;
    cout << "Name    : " << student.second << endl;

    return 0;
}