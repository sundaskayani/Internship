#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> students;

    students.push_back("Ali");
    students.push_back("Sara");
    students.push_back("Ahmed");

    cout << "Students Added Successfully!\n\n";

    for (int i = 0; i < students.size(); i++)
    {
        cout << students[i] << endl;
    }

    return 0;
}