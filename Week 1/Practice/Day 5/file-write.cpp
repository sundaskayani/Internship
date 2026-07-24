#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("students.txt");

    file << "Ali 90" << endl;
    file << "Sara 85" << endl;

    file.close();

    cout << "Data written successfully." << endl;

    return 0;
}