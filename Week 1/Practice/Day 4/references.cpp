#include <iostream>
using namespace std;

int main()
{
    int number = 20;
    int &ref = number;

    cout << "Number: " << number << endl;
    cout << "Reference: " << ref << endl;

    ref = 50;

    cout << "Updated Number: " << number << endl;

    return 0;
}