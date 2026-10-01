#include <iostream>
#include <vector>
using namespace std;

int binSearch(vector<int> &nums, int target, int start, int end)
{
    if (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] == target)
        { // mid is target
            return mid;
        }
        else if (nums[mid] <= target)
        { // 2nd half
            return binSearch(nums, target, mid + 1, end);
        }
        else
        { // 1st half
            return binSearch(nums, target, start, mid - 1);
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 9;
    int start = 0, end = nums.size() - 1;
    cout << "Target " << target << " is at an idx of: " << binSearch(nums, target, start, end);
    return 0;
}

// Time Complexity = O(logn)
// Space Complexity = O(logn)