#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> marks;

    marks.push_back(78);
    marks.push_back(95);
    marks.push_back(82);
    marks.push_back(67);
    marks.push_back(90);

    sort(marks.begin(), marks.end());

    cout << "Sorted Marks\n\n";

    for (int i = 0; i < marks.size(); i++)
    {
        cout << marks[i] << " ";
    }

    return 0;
}