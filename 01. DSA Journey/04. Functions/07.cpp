#include <iostream>
using namespace std;

bool prime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n = 5;

    if (prime(n))
    {
        cout << n << " is a prime number.";
    }
    else
    {
        cout << n << " is a non-prime number.";
    }

    return 0;
}