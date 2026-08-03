#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> marks;

    marks.push_back(75);
    marks.push_back(90);
    marks.push_back(82);

    cout << "Student Marks\n";

    for (int i = 0; i < marks.size(); i++)
    {
        cout << marks[i] << endl;
    }

    return 0;
}