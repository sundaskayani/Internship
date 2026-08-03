#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
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

    bool operator<(const Student &other) const
    {
        return name < other.name;
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
map<int, string> studentDirectory;
int nextStudentID = 1001;
void showMenu()
{
    cout << "\n Student Grade Tracker " << endl;
    cout << "1. Add Student" << endl;
    cout << "2. View Students" << endl;
    cout << "3. Sort Students by Name" << endl;
    cout << "4. View Student Directory" << endl;
    cout << "5. Premium Student Demo" << endl;
    cout << "6. Exit" << endl;
}

void addStudent()
{
    Student s;

    s.input();

    students.push_back(s);

    pair<int, string> studentRecord(nextStudentID, s.getName());
    studentDirectory.insert(studentRecord);

    cout << "\nStudent added successfully!" << endl;
    cout << "Student ID : " << nextStudentID << endl;

    nextStudentID++;
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

void sortStudents()
{
    if (students.empty())
    {
        cout << "\nNo students available." << endl;
        return;
    }

    sort(students.begin(), students.end());

    cout << "\nStudents sorted successfully!" << endl;
}

void viewStudentDirectory()
{
    if (studentDirectory.empty())
    {
        cout << "\nNo student records found." << endl;
        return;
    }

    cout << "\n Student Directory " << endl;

    for (auto record : studentDirectory)
    {
        cout << "Student ID : " << record.first
             << "   Name : " << record.second << endl;
    }
}

void premiumStudentDemo()
{
    PremiumStudent p1;

    p1.input();
    p1.setScholarship(5000);

    cout << "\nPremium Student" << endl;
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
            sortStudents();
            break;

        case 4:
            viewStudentDirectory();
            break;

        case 5:
            premiumStudentDemo();
            break;

        case 6:
            cout << "\nThank you for using Student Grade Tracker!" << endl;
            break;

        default:
            cout << "\nInvalid choice! Please try again." << endl;
        }

    } while (choice != 6);

    return 0;
}