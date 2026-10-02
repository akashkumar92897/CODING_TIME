#include <iostream>
#include <vector>
using namespace std;

void getPermutations(vector<int> &nums, int idx, vector<vector<int>> &ans)
{
    // Base Case
    if (idx == nums.size())
    {
        ans.push_back({nums});
        return;
    }

    // Swap in the same array
    for (int i = idx; i < nums.size(); i++)
    {
        swap(nums[idx], nums[i]); // idx place => ith element choice
        getPermutations(nums, idx + 1, ans);

        // Backtracking
        swap(nums[idx], nums[i]);
    }
}

vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> ans;
    getPermutations(nums, 0, ans);
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3};

    // Print all subsets.
    vector<vector<int>> result = permute(nums);
    for (vector<int> subset : result)
    {
        cout << "[ ";

        for (int value : subset)
        {
            cout << value << " ";
        }

        cout << "]" << endl;
    }

    return 0;
}

// Time Complexity = O(n! * n)
// Space Complexity = O(n!)