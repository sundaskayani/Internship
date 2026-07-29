#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers;

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    cout << "First Element : " << numbers[0] << endl;
    cout << "Second Element: " << numbers[1] << endl;
    cout << "Third Element : " << numbers[2] << endl;

    cout << "Vector Size : " << numbers.size() << endl;

    return 0;
}