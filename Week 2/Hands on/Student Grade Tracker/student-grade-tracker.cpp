#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int english;
    int math;
    int science;

public:
    
    Student()
    {
        name = "";
        english = 0;
        math = 0;
        science = 0;
    }
    void input()
    {
        cout << "\nEnter Student Name: ";
        cin >> name;

        do
        {
            cout << "Enter English Marks (0-100): ";
            cin >> english;

            if (english < 0 || english > 100)
            {
                cout << "Invalid marks! Please enter marks between 0 and 100.\n";
            }

        } while (english < 0 || english > 100);

        do
        {
            cout << "Enter Math Marks (0-100): ";
            cin >> math;

            if (math < 0 || math > 100)
            {
                cout << "Invalid marks! Please enter marks between 0 and 100.\n";
            }

        } while (math < 0 || math > 100);

        do
        {
            cout << "Enter Science Marks (0-100): ";
            cin >> science;

            if (science < 0 || science > 100)
            {
                cout << "Invalid marks! Please enter marks between 0 and 100.\n";
            }

        } while (science < 0 || science > 100);
    }

    double calculateAverage()
    {
        return (english + math + science) / 3.0;
    }

    void display()
    {
        cout << "\nName     : " << name << endl;
        cout << "English  : " << english << endl;
        cout << "Math     : " << math << endl;
        cout << "Science  : " << science << endl;
        cout << "Average  : " << calculateAverage() << endl;
    }
};

Student students[10];
int studentCount = 0;

void showMenu()
{
    cout << "\n Student Grade Tracker " << endl;
    cout << "1. Add Student" << endl;
    cout << "2. View Students" << endl;
    cout << "3. Exit" << endl;
}

void addStudent()
{
    if (studentCount >= 10)
    {
        cout << "Student list is full!" << endl;
        return;
    }

    students[studentCount].input();
    studentCount++;

    cout << "\nStudent added successfully!" << endl;
}

void viewStudents()
{
    if (studentCount == 0)
    {
        cout << "\nNo students added yet." << endl;
        return;
    }

    cout << "\n Student Records " << endl;

    for (int i = 0; i < studentCount; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        students[i].display();
    }
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
            cout << "\nThank you for using Student Grade Tracker!" << endl;
            break;

        default:
            cout << "\nInvalid choice! Please try again." << endl;
        }

    } while (choice != 3);

    return 0;
}