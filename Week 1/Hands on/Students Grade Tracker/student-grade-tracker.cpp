#include <iostream>
using namespace std;

void showMenu()
{
    cout << " Student Grade Tracker " << endl;
    cout << "1. Add Student" << endl;
    cout << "2. View Students" << endl;
    cout << "3. Exit" << endl;
}

void addStudent()
{
    cout << "Add Student feature coming soon..." << endl;
}

void viewStudents()
{
    cout << "View Students feature coming soon..." << endl;
}

int main()
{
    int choice;

    showMenu();

    cout << "\nEnter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        addStudent();
    }
    else if (choice == 2)
    {
        viewStudents();
    }
    else if (choice == 3)
    {
        cout << "Goodbye!" << endl;
    }
    else
    {
        cout << "Invalid Choice!" << endl;
    }

    return 0;
}