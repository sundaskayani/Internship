#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int marks;

public:
    void setName(string n)
    {
        name = n;
    }

    void setMarks(int m)
    {
        if (m >= 0 && m <= 100)
            marks = m;
        else
            cout << "Invalid Marks!" << endl;
    }

    string getName()
    {
        return name;
    }

    int getMarks()
    {
        return marks;
    }
};

int main()
{
    Student s1;

    s1.setName("Ali");
    s1.setMarks(90);

    cout << "Name : " << s1.getName() << endl;
    cout << "Marks: " << s1.getMarks() << endl;

    return 0;
}