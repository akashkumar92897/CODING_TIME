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
    return revNum;
}

bool isPalindrome(int n)
{
    if (n < 0)
        return false;

    int revNum = reverseN(n);
    if (n == revNum)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n = 43434;
    cout << reverseN(n) << endl;
    cout << isPalindrome(n) << endl;
    return 0;
}

// Time Complexity = O(log|n|)
// Space Complexity = O(1)