// Majority Element => Optimized Approach using Sorting
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> nums = {2, 3, 2, 3, 2, 2, 3, 3, 3};

    // Sort Array => O(nlogn)
    sort(nums.begin(), nums.end());
    int freq = 1, ans = nums[0];

    // Freq Count => O(n)
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == nums[i - 1])
        {
            freq++;
        }
        else
        {
            freq = 1, ans = nums[i];
        }
        if (freq > nums.size() / 2)
        {
            cout << ans << " ";
        }
    }
    return 0;
}

// Time Complexity = O(nlogn)