#include <iostream>
#include <string>
using namespace std;

string studentNames[10];
int studentMarks[10];
int studentCount = 0;

void showMenu()
{
    cout << "\n Student Grade Tracker " << endl;
    cout << "1. Add Student" << endl;
    cout << "2. View Students" << endl;
    cout << "3. Exit" << endl;
}

void addStudent(string &name, int &marks)
{
    if (studentCount < 10)
    {
        cout << "Enter Student Name: ";
        cin >> name;

        do
        {
            cout << "Enter Student Marks (0-100): ";
            cin >> marks;

            if (marks < 0 || marks > 100)
            {
                cout << "Invalid marks! Please enter marks between 0 and 100.\n";
            }

        } while (marks < 0 || marks > 100);

        studentNames[studentCount] = name;
        studentMarks[studentCount] = marks;

        studentCount++;

        cout << "Student added successfully!" << endl;
    }
    else
    {
        cout << "Student list is full!" << endl;
    }
}

void viewStudents()
{
    if (studentCount == 0)
    {
        cout << "\nNo students added yet." << endl;
        return;
    }

    cout << "\nStudent Records " << endl;

    for (int i = 0; i < studentCount; i++)
    {
    
        int *ptrMarks = &studentMarks[i];

        cout << "Student " << i + 1 << endl;
        cout << "Name  : " << studentNames[i] << endl;
        cout << "Marks : " << *ptrMarks << endl;
        cout << "------------------------" << endl;
    }
}

int main()
{
    int choice;

    string name;
    int marks;

    do
    {
        showMenu();

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addStudent(name, marks);
            break;

        case 2:
            viewStudents();
            break;

        case 3:
            cout << "Goodbye!" << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 3);

    return 0;
}