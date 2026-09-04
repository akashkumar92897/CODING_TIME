// // Pair Sum => (Two Pointer Approach)
#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size(), st = 0, end = nums.size() - 1;
    while (st < end)
    {
        int pairSum = nums[st] + nums[end];
        if (pairSum > target)
        {
            end--;
        }
        else if (pairSum < target)
        {
            st++;
        }
        else
        {
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
    }
    return {};
}

int main()
{

    vector<int> nums = {2, 7, 11, 15};
    int target = 18;

    vector<int> ans = pairSum(nums, target);
    cout << ans[0] << "," << ans[1] << endl;
    return 0;
}

// Time Complexity = O(n)