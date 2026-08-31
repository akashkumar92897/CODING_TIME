// Finding Subarray --> Brute Force Approach
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            for (int i = start; i <= end; i++)
            {
                cout << arr[i] << " ";
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}

// Time Complexity = O(n^3)
// Maximum number of subarray = n(n+1)/2