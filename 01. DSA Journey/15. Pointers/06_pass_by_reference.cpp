// Pass by reference using alias.

#include <iostream>
using namespace std;

void changeA(int &b)
{
    b = 20;
    cout << "inside changeA fxn : " << b << endl; // 20
}

int main()
{
    int a = 10;
    changeA(a);
    cout << "Inside main fxn : " << a << endl; // 20
    return 0;
}