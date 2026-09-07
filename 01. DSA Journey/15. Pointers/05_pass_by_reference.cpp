// Pass by reference using pointers.

#include <iostream>
using namespace std;

void changeA(int *ptr)
{
    *ptr = 20;
    cout << "inside changeA fxn : " << *ptr << endl; // 20
}

int main()
{
    int a = 10;

    changeA(&a);

    cout << "Inside main fxn : " << a << endl; // 20
    return 0;
}