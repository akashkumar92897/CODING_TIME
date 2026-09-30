#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n = 4;
    cout << "Fibonacci of " << n << "th term is: " << fibonacci(n);
    return 0;
}

// Time Complexity = O(2^n)
// Space Complexity = O(n)