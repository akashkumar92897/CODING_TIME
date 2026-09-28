// Subarray Sum Equals k => Brute Force Approach
#include <iostream>
#include <vector>
using namespace std;

int subarraySum(vector<int> &nums, int k)
{
    int n = nums.size();
    int count = 0;

    for (int i = 0; i < n; i++)
    { // Starting Point
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += nums[j];
            if (sum == k)
                count++;
        }
    }
    return count;
}

int main()
{
    vector<int> nums = {9, 4, 20, 3, 10, 5};
    int target = 33;

    cout << subarraySum(nums, target);
    return 0;
}

// Time Complexity = O(n^2)
// SSpace Complexity = O(1)