// 2 Sum => 2 Pointer Approach
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    // Store {value, original index}
    vector<pair<int, int>> arr;

    for (int i = 0; i < nums.size(); i++)
    {
        arr.push_back({nums[i], i});
    }

    // Sort based on value
    sort(arr.begin(), arr.end());

    int start = 0;
    int end = arr.size() - 1;

    while (start < end)
    {
        int sum = arr[start].first + arr[end].first;

        if (sum > target)
        {
            end--;
        }
        else if (sum < target)
        {
            start++;
        }
        else
        {
            // Return original indices
            return {arr[start].second, arr[end].second};
        }
    }

    return {-1, -1};
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

// Time Complexity = O(n log n)
// Space Complexity = O(n)