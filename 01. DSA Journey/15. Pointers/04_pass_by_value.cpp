#include <iostream>
using namespace std;

// This is pass by value, where copy of the variable is created in another fxn, and there is no change in main fxn variable on changing in different fxn.

void changeA(int a)
{
    a = 20;
    cout << "inside changeA fxn : " << a << endl; // 20
}

int main()
{
    int a = 10;
    changeA(a);
    cout << "Inside main fxn : " << a << endl; // 10
    return 0;
}