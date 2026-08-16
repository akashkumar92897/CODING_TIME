#include <iostream>
using namespace std;
int main()
{
    int n = 8;
    for (int i = 0; i < n; i++)
    {
        // Spaces --> n-i-1
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }

        // Nums 1 --> 1 to i+1 times
        for (int j = 1; j <= i+1; j++)
        {
            cout << j;
        }

        // Nums 2 --> i to 1
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}