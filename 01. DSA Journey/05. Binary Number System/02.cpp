#include <iostream>
using namespace std;

int bin2Dec(int binN)
{
    int pow = 1, ans = 0;
    while (binN > 0)
    {
        int rem = binN % 10;
        ans += rem*pow;
        binN /= 10;
        pow *= 2;
    }
    return ans;
}

int main()
{
    int binN = 10011;
    cout << bin2Dec(binN);
    return 0;
}