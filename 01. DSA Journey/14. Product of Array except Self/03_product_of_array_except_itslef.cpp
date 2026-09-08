// Product of array except itself => Most Optimzed
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {1, 2, 3, 4};
    int n = nums.size();
    vector<int> ans(n, 1);

    // Prefix   =>  Store product of all elements to the left
    int prefix = 1;
    for (int i = 1; i < n; i++)
    {
        prefix *= nums[i - 1];
        ans[i] = prefix;
    }

    // Suffix   =>  Multiply by product of all elements to the right
    int suffix = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        suffix *= nums[i + 1];
        ans[i] *= suffix;
    }

    // Answer vector output     =>  | 24 | 12 | 8 | 6 |
    for (int i : ans)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

// Time Complexity = O(n)
// Space Complexity = O(1)