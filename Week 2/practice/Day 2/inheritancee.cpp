#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
    string name;
    int marks;

public:
    void setData(string n, int m)
    {
        name = n;
        marks = m;
    }
};

class PremiumStudent : public Student
{
public:
    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    PremiumStudent s1;

    s1.setData("Sara", 95);
    s1.display();

    return 0;
}