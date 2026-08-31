// Max Subarray Sum --> Brute Force Approach
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int n = 7;

    int maxSum = INT_MIN;
    for (int start = 0; start < n; start++)
    {
        int currSum = 0;
        for (int end = start; end < n; end++)
        {
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }
    cout << maxSum << endl;
    return 0;
}

// Time Complexity = O(n^2)