#include <iostream>
using namespace std;

int main()
{
    int number = 10;
    int *ptr = &number;

    cout << "Value: " << number << endl;
    cout << "Address: " << ptr << endl;
    cout << "Value using Pointer: " << *ptr << endl;

    return 0;
}