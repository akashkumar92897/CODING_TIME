// Moore's Voting Algorithm Variation => No guarranty of existence of majority element
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {1, 2, 3, 4};

    int freq = 0, ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (freq == 0)
        {
            ans = nums[i];
        }
        if (ans == nums[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }

    int count = 0;
    for (int val : nums)
    {
        if (val == ans)
        {
            count++;
        }
    }
    if (count > nums.size() / 2)
    {
        cout << ans << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}

// Time Complexity = O(n)