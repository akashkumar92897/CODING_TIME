// Count Inversion => Optimal Merge Sort Approach
#include <iostream>
#include <vector>
using namespace std;

int merge(vector<int> &nums, int start, int mid, int end)
{
    vector<int> temp;
    int i = start, j = mid + 1, invCount = 0;
    while (i <= mid && j <= end)
    {
        if (nums[i] <= nums[j])
        {
            temp.push_back(nums[i]);
            i++;
        }
        else
        {
            temp.push_back(nums[j]);
            j++;
            invCount += (mid - i + 1);
        }
    }
    while (i <= mid)
    {
        temp.push_back(nums[i]);
        i++;
    }
    while (j <= end)
    {
        temp.push_back(nums[j]);
        j++;
    }
    for (int idx = 0; idx < temp.size(); idx++)
    {
        nums[start + idx] = temp[idx];
    }
    return invCount;
}

int mergeSort(vector<int> &nums, int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;
        int leftInvCount = mergeSort(nums, start, mid);
        int rightInvCount = mergeSort(nums, mid + 1, end);
        int invCount = merge(nums, start, mid, end);
        return leftInvCount + rightInvCount + invCount;
    }
    return 0;
}

int main()
{
    vector<int> nums = {6, 3, 5, 2, 7};
    int start = 0, end = nums.size() - 1;
    cout << "Total no. of inversions : " << mergeSort(nums, start, end);
    return 0;
}

// Time Complexity = O(n log n)
// Space Complexity = O(n)