#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << " Student Grade Tracker " << endl;
    cout << "1. Add Student" << endl;
    cout << "2. View Students" << endl;
    cout << "3. Exit" << endl;

    cout << "\nEnter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Add Student feature coming soon..." << endl;
    }
    else if (choice == 2)
    {
        cout << "View Students feature coming soon..." << endl;
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