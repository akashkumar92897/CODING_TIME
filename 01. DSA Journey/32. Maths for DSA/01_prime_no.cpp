// Function to check n is prime or not.
#include <iostream>
using namespace std;

string isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return "Non-Prime No.";
    }
    return "Prime No.";
}

int main()
{
    int n = 13;
    cout << n << " is a " << isPrime(n) << endl;

    return 0;
}

// Time Complexity = O(√n)
// Space Complexity = O(1)