#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> marks;

    marks.push_back(85);
    marks.push_back(90);
    marks.push_back(78);
    marks.push_back(95);

    cout << "Student Marks:\n";

    for (int i = 0; i < marks.size(); i++)
    {
        cout << "Marks " << i + 1 << " : " << marks[i] << endl;
    }

    return 0;
}