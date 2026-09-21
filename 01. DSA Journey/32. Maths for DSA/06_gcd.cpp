// GCD / HCF => Greatest Common Divisor
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    int gcd = 1;

    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }
    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}

int main()
{
    int a = 20, b = 28;
    cout << gcd(a, b) << endl;

    return 0;
}

// Time Complexity = O(min(a,b))
// Space Complexity = O(1)