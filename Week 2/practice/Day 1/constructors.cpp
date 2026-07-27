#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int marks;

    Student()
    {
        cout << "Constructor Called!" << endl;

        name = "Unknown";
        marks = 0;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1;

    s1.display();

    return 0;
}