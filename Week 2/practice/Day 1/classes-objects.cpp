#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int marks;

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1;

    s1.name = "Ali";
    s1.marks = 90;

    s1.display();

    return 0;
}