#include <iostream>
using namespace std;

bool isArmstrong(int n)
{
    int copyN = n;
    int sumOfCubes = 0;
    while (n != 0)
    {
        int dig = n % 10;
        sumOfCubes += (dig * dig * dig);
        n /= 10;
    }
    return sumOfCubes == copyN;
}

int main()
{
    int n = 135;
    if (isArmstrong(n))
    {
        cout << n << " is an armstrong number.";
    }
    else
    {
        cout << n << " is not an armstrong number.";
    }
    return 0;
}

// Time Complexity = O(log10n)
// Space Complexity = O(1)