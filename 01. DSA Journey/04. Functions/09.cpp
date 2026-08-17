#include <iostream>
using namespace std;

void fibonacci(int n)
{
    int a = 0;
    int b = 1;

    while (a <= n)
    {
        cout << a << " ";

        int next = a + b;
        a = b;
        b = next;
    }
}

int main()
{
    int n = 20;

    fibonacci(n);

    return 0;
}