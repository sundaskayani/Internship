#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream file("students.txt");

    string name;
    int marks;

    while (file >> name >> marks)
    {
        cout << name << " " << marks << endl;
    }

    file.close();

    return 0;
}