#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int marks;

public:
    void setData(string n, int m)
    {
        name = n;
        marks = m;
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

    s1.setData("Sara", 95);

    s1.display();

    return 0;
}