#include <iostream>
using namespace std;

bool isPowerOf2(int n)
{
    int power = 1;

    while (power <= n)
    {
        if (power == n)
        {
            return true;
        }

        power *= 2;
    }

    return false;
}

int main()
{
    int n = 17;

    if (isPowerOf2(n))
    {
        cout << n << " is a power of 2";
    }
    else
    {
        cout << n << " is not a power of 2";
    }

    return 0;
}