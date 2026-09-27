// 2 Sum => Hashing Approach
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int> &nums, int tar)
{
    unordered_map<int, int> m;
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        int first = nums[i];
        int sec = tar - first;

        if (m.find(sec) != m.end())
        {
            ans.push_back(i);
            ans.push_back(m[sec]);
            break;
        }
        m[first] = i;
    }
    return ans;
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

// Time Complexity = O(n)
// Space Complexity = O(n)