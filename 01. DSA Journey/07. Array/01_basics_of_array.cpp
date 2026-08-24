#include <iostream>
using namespace std;
int main()
{
    int marks[5] = {99, 98, 97, 96, 95}; // Initialisation of Array
    int size = 5;
    double price[] = {12.1, 12.2, 12.3, 12.4, 12.5}; // If size of array = no. of elements => Don't have need to init size.

    // Access array elements => idx = position = { 0 to (size-1)}
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;

    // cout << marks[5] << endl;   // Will give idx warning.

    // Size of an array
    cout << sizeof(marks) / sizeof(int) << endl;

    // Loops on Array
    for (int i = 0; i < size; i++)
    {
        cout << marks[i] << endl;
    }

    // Input in Array using Loop
    int sz = 3;
    int amount[sz];

    for (int i = 0; i < sz; i++)
    {
        cin >> price[i];
    }
    for (int i = 0; i < sz; i++)
    {
        cout << price[i] << endl;
    }

    return 0;
}