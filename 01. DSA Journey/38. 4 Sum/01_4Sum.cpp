// 3 Sum => Most Optimized - 2 Pointer Approach
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    vector<vector<int>> ans;
    int n = nums.size();

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        for (int j = i + 1; j < n;)
        {
            int p = j + 1, q = n - 1;

            while (p < q)
            {
                long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[p] + (long long)nums[q];

                if (sum < target)
                {
                    p++;
                }
                else if (sum > target)
                {
                    q--;
                }
                else
                { // sum == target
                    ans.push_back({nums[i], nums[j], nums[p], nums[q]});
                    p++, q--;

                    while (p < q && nums[p] == nums[p - 1])
                        p++;
                }
            }
            j++;
            while (j < n && nums[j] == nums[j - 1])
                j++;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {-2, -1, -1, 1, 1, 2, 2};
    int target = 0;
    vector<vector<int>> ans = fourSum(nums, target);

    for (vector<int> triplet : ans)
    {
        for (int value : triplet)
        {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}

// Time Complexity = O(nlogn + n^3) = O(n^3)
// Space Complexity = O(uniqueGroups)