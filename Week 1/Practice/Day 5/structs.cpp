#include <iostream>
using namespace std;

struct Student
{
    string name;
    int marks;
};

int main()
{
    Student s1;

    s1.name = "Ali";
    s1.marks = 90;

    cout << "Name: " << s1.name << endl;
    cout << "Marks: " << s1.marks << endl;

    return 0;
}