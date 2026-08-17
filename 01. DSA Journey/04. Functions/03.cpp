#include <iostream>
using namespace std;

int sumOfN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int n = 5;
    cout << sumOfN(n);
    return 0;
}