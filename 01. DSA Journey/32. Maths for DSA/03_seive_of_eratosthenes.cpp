#include <iostream>
#include <vector>
using namespace std;

int countPrimes(int n)
{
    vector<bool> isPrime(n + 1, true);
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (isPrime[i])
        {
            count++;

            for (int j = i * 2; j < n; j+=i)
            {
                isPrime[j] = false;
            }
        }
    }
    return count;
}

int main()
{
    int N = 10;

    cout << "Prime numbers from 2 to " << N << " are: " << countPrimes(N) << endl;
    return 0;
}

// Time Complexity = O(n log log n)
// Space Complexity = O(n)