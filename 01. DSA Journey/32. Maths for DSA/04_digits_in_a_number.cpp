#include <iostream>
#include <cmath>
using namespace std;

void printDigits(int n)
{
    int digit = 0, count = 0, sum = 0;
    cout << "Digits of " << n << " are :" << endl;
    while (n != 0)
    {
        digit = n % 10;
        cout << digit << endl;
        count++;
        sum += digit;
        n /= 10;
    }

    cout << "Count of digits in given number are: " << count << endl;
    cout << "Sum of all digits in given number are: " << sum << endl;
}

int main()
{
    int n = 3568;
    printDigits(n);

    // Count of digits shortcut
    cout << (int)(log10(n) + 1) << endl;
    return 0;
}

// Time Complexity = O(log10n)
// Space Complexity = O(1)