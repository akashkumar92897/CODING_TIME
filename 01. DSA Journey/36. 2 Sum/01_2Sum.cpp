// 2 Sum => Brute Force Approach
#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        int first = nums[i];
        for (int j = i + 1; j < nums.size(); j++)
        {
            int second = nums[j];
            if (first + second == target)
            {
                return {i, j};
            }
        }
    }
}

int main()
{
    vector<int> nums = {5, 2, 11, 7, 15};
    int target = 9;
    vector<int> ans = twoSum(nums, target);

    for (int i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}

// Time Complexity = O(n^2)
// Space Complexity = O(1)