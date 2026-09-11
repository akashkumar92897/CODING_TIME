#include <iostream>
using namespace std;

void selectionSort(int nums[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallestIdx = i;    // Unsorted part starting
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] < nums[smallestIdx])
            {
                smallestIdx = j;
            }
        }
        swap(nums[i], nums[smallestIdx]);
    }
}

void printSortedArray(int nums[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main()
{
    int nums[] = {4, 1, 5, 2, 3};
    int n = 5;

    selectionSort(nums, n);
    printSortedArray(nums, n);

    return 0;
}

// Time Complexity = O(n^2)
// Space Complexity = O(1)