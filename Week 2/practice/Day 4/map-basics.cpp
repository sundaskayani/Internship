#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> students;

    students[101] = "Ali";
    students[102] = "Sara";
    students[103] = "Ahmed";

    cout << "Student Records\n\n";

    for (auto student : students)
    {
        cout << "Roll No: " << student.first
             << "  Name: " << student.second << endl;
    }

    return 0;
}