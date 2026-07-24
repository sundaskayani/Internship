#include <iostream>
using namespace std;

int main()
{
    int marks[5] = {85, 90, 78, 88, 95};

    cout << "Student Marks:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << marks[i] << endl;
    }

    return 0;
}