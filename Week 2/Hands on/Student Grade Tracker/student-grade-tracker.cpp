#include <iostream>
#include <string>
#include <vector>
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

    void setName(string n)
    {
        name = n;
    }

    void setEnglish(int e)
    {
        english = e;
    }

    void setMath(int m)
    {
        math = m;
    }

    void setScience(int s)
    {
        science = s;
    }

    string getName()
    {
        return name;
    }

    int getEnglish()
    {
        return english;
    }

    int getMath()
    {
        return math;
    }

    int getScience()
    {
        return science;
    }

    void input()
    {
        string n;
        int e, m, s;

        cout << "\nEnter Student Name: ";
        cin >> n;
        setName(n);

        do
        {
            cout << "Enter English Marks (0-100): ";
            cin >> e;

            if (e < 0 || e > 100)
                cout << "Invalid marks! Please enter marks between 0 and 100.\n";

        } while (e < 0 || e > 100);

        setEnglish(e);

        do
        {
            cout << "Enter Math Marks (0-100): ";
            cin >> m;

            if (m < 0 || m > 100)
                cout << "Invalid marks! Please enter marks between 0 and 100.\n";

        } while (m < 0 || m > 100);

        setMath(m);

        do
        {
            cout << "Enter Science Marks (0-100): ";
            cin >> s;

            if (s < 0 || s > 100)
                cout << "Invalid marks! Please enter marks between 0 and 100.\n";

        } while (s < 0 || s > 100);

        setScience(s);
    }

    double calculateAverage()
    {
        return (getEnglish() + getMath() + getScience()) / 3.0;
    }

    virtual void display()
    {
        cout << "\nName     : " << getName() << endl;
        cout << "English  : " << getEnglish() << endl;
        cout << "Math     : " << getMath() << endl;
        cout << "Science  : " << getScience() << endl;
        cout << "Average  : " << calculateAverage() << endl;
    }

    virtual ~Student() {}
};

class PremiumStudent : public Student
{
private:
    double scholarship;

public:
    PremiumStudent()
    {
        scholarship = 0;
    }

    void setScholarship(double s)
    {
        scholarship = s;
    }

    void display() override
    {
        Student::display();
        cout << "Scholarship : " << scholarship << endl;
    }
};

vector<Student> students;

void showMenu()
{
    cout << "\n Student Grade Tracker " << endl;
    cout << "1. Add Student" << endl;
    cout << "2. View Students" << endl;
    cout << "3. Premium Student Demo" << endl;
    cout << "4. Exit" << endl;
}

void addStudent()
{
    Student s;

    s.input();

    students.push_back(s);

    cout << "\nStudent added successfully!" << endl;
}

void viewStudents()
{
    if (students.empty())
    {
        cout << "\nNo students added yet." << endl;
        return;
    }

    cout << "\n Student Records " << endl;

    for (int i = 0; i < students.size(); i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        students[i].display();
    }
}

void premiumStudentDemo()
{
    PremiumStudent p1;

    p1.input();
    p1.setScholarship(5000);

    cout << "\n Premium Student " << endl;
    p1.display();
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
            premiumStudentDemo();
            break;

        case 4:
            cout << "\nThank you for using Student Grade Tracker!" << endl;
            break;

        default:
            cout << "\nInvalid choice! Please try again." << endl;
        }

    } while (choice != 4);

    return 0;
}