#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> nums)
{
    if (nums.size() == 1)
        return nums[0];

    int start = 0, end = nums.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2; // Find mid

        // Corner Cases
        if (mid == 0 && nums[0] != nums[1])
            return nums[mid];
        if (mid == nums.size() - 1 && nums[nums.size() - 1] != nums[nums.size() - 2])
            return nums[mid];

        // If mid is single element
        if (nums[mid - 1] != nums[mid] && nums[mid] != nums[mid + 1])
            return nums[mid];

        // if mid is at even idx
        if (mid % 2 == 0)
        {
            if (nums[mid - 1] == nums[mid]) // Left half has ans
            {
                end = mid - 1;
            }
            else // right half has ans
            {
                start = mid + 1;
            }
        }

        // if mid is at odd idx
        else
        {
            if (nums[mid - 1] == nums[mid]) // right half has ans
            {
                start = mid + 1;
            }
            else // Left half has ans
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    cout << binarySearch(nums) << endl;
    return 0;
}

// Time Complexity = O(logn)
// Space Complexity = O(1)