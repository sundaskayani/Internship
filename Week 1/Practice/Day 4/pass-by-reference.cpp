#include <iostream>
using namespace std;

void changeValue(int &number)
{
    number = 100;
}

int main()
{
    int number = 10;

    changeValue(number);

    cout << "Number: " << number << endl;

    return 0;
}