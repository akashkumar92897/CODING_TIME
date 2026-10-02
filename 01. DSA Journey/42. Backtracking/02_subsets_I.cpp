#include <iostream>
#include <vector>
using namespace std;

// Recursive helper function to generate all subsets
void getAllSubsets(vector<int> &nums, vector<int> &current, int i, vector<vector<int>> &allSubsets)
{
    // Base Case
    if (i == nums.size())
    {
        allSubsets.push_back(current);
        return;
    }

    // Include the current element in the subset.
    current.push_back(nums[i]);

    // Move to the next element.
    getAllSubsets(nums, current, i + 1, allSubsets);

    // Remove the element we just included so that we can explore the exclude branch.
    current.pop_back();

    // Do not include the current element.
    getAllSubsets(nums, current, i + 1, allSubsets);
}

// Main function required by LeetCode
vector<vector<int>> subsets(vector<int> &nums)
{
    // Stores all generated subsets.
    vector<vector<int>> allSubsets;

    // Stores the subset currently being constructed.
    vector<int> current;

    // Start recursion from index 0.
    getAllSubsets(nums, current, 0, allSubsets);

    // Return all subsets.
    return allSubsets;
}

int main()
{
    vector<int> nums = {1, 2, 3};

    // Generate all subsets.
    vector<vector<int>> result = subsets(nums);

    // Print all subsets.
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

// Time Complexity = O(n * 2^n)
// Space Complexity = O(n) auxiliary
// Output Space = O(n * 2^n)