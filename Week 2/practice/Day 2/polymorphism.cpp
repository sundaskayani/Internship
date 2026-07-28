#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    virtual void display()
    {
        cout << "Displaying Student Information" << endl;
    }
};

class PremiumStudent : public Student
{
public:
    void display() override
    {
        cout << "Displaying Premium Student Information" << endl;
    }
};

int main()
{
    Student *ptr;

    PremiumStudent s1;

    ptr = &s1;

    ptr->display();

    return 0;
}