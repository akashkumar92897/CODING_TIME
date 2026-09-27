// 3 Sum => Optimized using Hashing
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    int n = nums.size();
    set<vector<int>> uniqueTriplets; // Set<uniqueTriplests>

    for (int i = 0; i < n; i++)
    {
        int tar = -nums[i];
        set<int> s;

        for (int j = i + 1; j < n; j++)
        {
            int third = tar - nums[j];

            if (s.find(third) != s.end())
            {
                vector<int> trip = {nums[i], nums[j], third};
                sort(trip.begin(), trip.end());
                uniqueTriplets.insert(trip);
            }
            s.insert(nums[j]);
        }
    }
    vector<vector<int>> ans(uniqueTriplets.begin(), uniqueTriplets.end());
    return ans;
}

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> ans = threeSum(nums);

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

// Time Complexity = O(n² * log(unique triplets))
// Space Complexity = O(n + unique triplets)