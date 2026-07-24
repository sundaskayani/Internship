#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int marks;
};

Student students[10];
int studentCount = 0;

void showMenu()
{
    cout << "\n===== Student Grade Tracker =====" << endl;
    cout << "1. Add Student" << endl;
    cout << "2. View Students" << endl;
    cout << "3. Calculate Average" << endl;
    cout << "4. Exit" << endl;
}

void addStudent()
{
    if (studentCount >= 10)
    {
        cout << "Student list is full!" << endl;
        return;
    }

    cout << "Enter Student Name: ";
    cin >> students[studentCount].name;

    do
    {
        cout << "Enter Student Marks (0-100): ";
        cin >> students[studentCount].marks;

        if (students[studentCount].marks < 0 || students[studentCount].marks > 100)
        {
            cout << "Invalid marks! Please enter marks between 0 and 100." << endl;
        }

    } while (students[studentCount].marks < 0 || students[studentCount].marks > 100);

    studentCount++;

    cout << "Student added successfully!" << endl;
}

void viewStudents()
{
    if (studentCount == 0)
    {
        cout << "No students added yet." << endl;
        return;
    }

    cout << "\n===== Student Records =====" << endl;

    for (int i = 0; i < studentCount; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Name  : " << students[i].name << endl;
        cout << "Marks : " << students[i].marks << endl;
    }
}

void calculateAverage()
{
    if (studentCount == 0)
    {
        cout << "No students available." << endl;
        return;
    }

    int total = 0;

    for (int i = 0; i < studentCount; i++)
    {
        total += students[i].marks;
    }

    double average = (double)total / studentCount;

    cout << "\nAverage Marks = " << average << endl;
}

int main()
{
    int choice;

    do
    {
        showMenu();

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addStudent();
            break;

        case 2:
            viewStudents();
            break;

        case 3:
            calculateAverage();
            break;

        case 4:
            cout << "Thank you for using Student Grade Tracker!" << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}