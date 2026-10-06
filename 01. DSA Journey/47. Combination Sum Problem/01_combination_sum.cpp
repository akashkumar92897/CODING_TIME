#include <iostream>
#include <vector>
#include <set>
using namespace std;

// Public Set of vector of int to track all the unique values only
set<vector<int>> s;

void helper(vector<int> &candidates, int idx, int target, vector<vector<int>> &ans, vector<int> &combination)
{
    // Base Cases
    if (idx == candidates.size() || target < 0)
        return;
    // Ans Base Case
    if (target == 0)
    {
        if (s.find(combination) == s.end())
        {
            ans.push_back(combination);
            s.insert(combination);
        }
        return;
    }
    combination.push_back(candidates[idx]);
    // Single Inclusion
    helper(candidates, idx + 1, target - candidates[idx], ans, combination);
    // Multiple Inclusion
    helper(candidates, idx, target - candidates[idx], ans, combination);
    // Backtracking
    combination.pop_back();
    // Exclusion
    helper(candidates, idx + 1, target, ans, combination);
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    vector<vector<int>> ans;
    vector<int> combination;
    helper(candidates, 0, target, ans, combination);
    return ans;
}

int main()
{
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;
    vector<vector<int>> result = combinationSum(candidates, target);

    for (vector<int> combination : result)
    {
        for (int value : combination)
            cout << value << " ";

        cout << endl;
    }
    return 0;
}

// Time Complexity = Exponential
// Space Complexity = O(target / min(candidates))