#include <iostream>
#include <vector>
using namespace std;

// Merge two sorted halves into one sorted range.
void merge(vector<int> &arr, int start, int mid, int end)
{
    vector<int> temp;
    int i = start, j = mid + 1;
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    // Add remaining elements from the left half.
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    // Add remaining elements from the right half.
    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }
    // Copy the sorted elements back to the original array.
    for (int idx = 0; idx < temp.size(); idx++)
    {
        arr[start + idx] = temp[idx];
    }
}

// Recursively divide the array and sort each half.
void mergeSort(vector<int> &arr, int start, int end)
{
    // Base Case
    if (start >= end)
        return;
    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid); // left half
    mergeSort(arr, mid + 1, end); // right half
    merge(arr, start, mid, end);
}

int main()
{
    vector<int> arr = {12, 31, 35, 8, 32, 17};
    int start = 0, end = arr.size() - 1;
    mergeSort(arr, start, end);
    cout << "Sorted Array: ";
    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}

// Time Complexity = O(n log n)
// Space Complexity = O(n)