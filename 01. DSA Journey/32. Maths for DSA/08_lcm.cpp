// LCM => Least Common Multiple
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }
}

int lcm(int a, int b)
{
    int gcdValue = gcd(a, b);
    return (a * b) / gcdValue;
}
int main()
{
    int a = 20, b = 28;
    cout << gcd(a, b) << endl;
    cout << lcm(a, b) << endl;

    return 0;
}

// Time Complexity = O(log(min(a, b)))
// Space Complexity = O(1)