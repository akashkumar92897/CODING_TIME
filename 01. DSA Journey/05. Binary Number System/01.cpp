#include <iostream>
using namespace std;

int dec2Bin(int decN)
{
    int pow = 1, ans = 0;
    while (decN > 0)
    {
        int rem = decN % 2;
        decN /= 2;
        ans += rem * pow;
        pow *= 10;
    }
    return ans;
}

int main()
{
    int decN = 12;
    cout << dec2Bin(decN) << endl;

    for (int i=1; i<=10; i++){
        cout << dec2Bin(i) << endl;
    }
    return 0;
}