#include <iostream>
using namespace std;

int main()
{
    
    cout << "For Loop:" << endl;
    for(int i = 1; i <= 5; i++)
    {
        cout << i << endl;
    }

    cout << endl;

    cout << "While Loop:" << endl;
    int j = 1;

    while(j <= 5)
    {
        cout << j << endl;
        j++;
    }

    cout << endl;

    cout << "Do-While Loop:" << endl;
    int k = 1;

    do
    {
        cout << k << endl;
        k++;
    }
    while(k <= 5);

    return 0;
}