#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 5;

    cout << "Arithmetic Operators:" << endl;
    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << a / b << endl;
    cout << "Modulus: " << a % b << endl;

    cout << endl;

    int c = a;
    c += b;
    cout << "Assignment Operator (c += b): " << c << endl;

    cout << endl;

    cout << "Comparison Operators:" << endl;
    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;
    cout << "a > b : " << (a > b) << endl;
    cout << "a < b : " << (a < b) << endl;
    cout << "a >= b : " << (a >= b) << endl;
    cout << "a <= b : " << (a <= b) << endl;

    cout << endl;

    cout << "Logical Operators:" << endl;
    cout << "(a > 5 && b < 10): " << (a > 5 && b < 10) << endl;
    cout << "(a < 5 || b < 10): " << (a < 5 || b < 10) << endl;
    cout << "!(a == b): " << !(a == b) << endl;

    return 0;
}