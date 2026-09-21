// Print all prime numbers from 2 to N => Brute force appraoch
#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num < 2)
        return false;

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }

    return true;
}

void printPrimes(int N)
{
    for (int i = 2; i <= N; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int N = 10;

    cout << "Prime numbers from 2 to " << N << " are: ";
    printPrimes(N);

    return 0;
}

// Time Complexity = O(n√n)
// Space Complexity = O(1)