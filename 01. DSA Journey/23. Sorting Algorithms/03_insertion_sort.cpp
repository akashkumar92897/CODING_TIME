#include <iostream>
using namespace std;

void insertionSort(int nums[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int curr = nums[i];
        int prev = i - 1;
        while (prev >= 0 && nums[prev] > curr)
        {
            nums[prev + 1] = nums[prev];
            prev--;
        }
        nums[prev + 1] = curr;  // Placing the curr element in its correct position
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

    insertionSort(nums, n);
    printSortedArray(nums, n);

    return 0;
}

// Time Complexity = O(n^2)
// Space Complexity = O(1)