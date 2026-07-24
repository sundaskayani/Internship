#include <iostream>
using namespace std;

int add(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    int result = add(10, 20);

    cout << "Sum = " << result << endl;

    return 0;
}