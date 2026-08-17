#include <iostream>
using namespace std;

int factorialN(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n = 5;
    cout << factorialN(n);

    return 0;
}