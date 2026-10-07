#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Partition the array around the pivot.
int partition(vector<int> &arr, int start, int end)
{
    int idx = start - 1, pivot = arr[end];
    // Move elements smaller than or equal to pivot to the left.
    for (int j = start; j < end; j++)
    {
        if (arr[j] <= pivot)
        {
            idx++;
            swap(arr[j], arr[idx]);
        }
    }
    // Place the pivot at its correct sorted position.
    idx++;
    swap(arr[end], arr[idx]);

    return idx;
}

// Recursively sort the left and right parts.
void quickSort(vector<int> &arr, int start, int end)
{
    // Base Case
    if (start < end)
    {
        int pivIdx = partition(arr, start, end);
        quickSort(arr, start, pivIdx - 1); // left part.
        quickSort(arr, pivIdx + 1, end); // right part.
    }
}

int main()
{
    vector<int> arr = {12, 31, 35, 8, 32, 17};
    int start = 0, end = arr.size() - 1;
    quickSort(arr, start, end);
    cout << "Sorted Array: ";
    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}

// Average Time Complexity = O(n log n)
// Worst Time Complexity = O(n^2)
// Space Complexity = O(log n) average, O(n) worst case