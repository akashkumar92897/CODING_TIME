#include <iostream>
#include <climits>
using namespace std;

int reverseN(int n)
{
    int revNum = 0, digit = 0;
    while (n != 0)
    {
        digit = n % 10;
        if (revNum > INT_MAX / 10 || revNum < INT_MIN / 10)
        {
            return 0;
        }
        revNum = (revNum * 10) + digit;
        n /= 10;
    }
    cout << revNum << endl;
}

int main()
{
    int n = 4365;
    reverseN(n);
    return 0;
}

// Time Complexity = O(log10n)
// Space Complexity = O(1)