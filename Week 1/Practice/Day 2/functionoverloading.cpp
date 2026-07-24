#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

int main()
{
    cout << "Integer Sum = " << add(5, 10) << endl;
    cout << "Double Sum = " << add(2.5, 3.7) << endl;

    return 0;
}