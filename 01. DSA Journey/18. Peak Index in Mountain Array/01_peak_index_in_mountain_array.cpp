#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr)
{
    int start = 1, end = arr.size() - 2;    // It eliminates corner cases, b/c arr[0] & arr[n-1] can't be peak.

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }

        if (arr[mid - 1] < arr[mid])
        { // mid is on increasing slop  => peak on right half
            start = mid + 1;
        }
        else
        { // mid is on decreasing slop  => peak on left half
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {0, 3, 8, 9, 5, 2};
    cout << binarySearch(arr) << endl;
    return 0;
}

// Time Complexity = O(logn)
// Space Complexity = O(1)