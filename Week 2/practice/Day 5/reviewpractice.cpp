#include <iostream>
#include <vector>
using namespace std;

class Student
{
private:
    string name;

public:
    Student(string n)
    {
        name = n;
    }

    string getName()
    {
        return name;
    }
};

int main()
{
    vector<Student> students;

    students.push_back(Student("Ali"));
    students.push_back(Student("Sara"));
    students.push_back(Student("Ahmed"));

    cout << "Student List\n\n";

    for (int i = 0; i < students.size(); i++)
    {
        cout << students[i].getName() << endl;
    }

    return 0;
}