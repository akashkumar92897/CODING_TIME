#include <iostream>
using namespace std;

int minOf2(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    cout << "Min of a and b: " << minOf2(5, 9);
    return 0;
}