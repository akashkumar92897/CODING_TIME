# Intuition
In mathematics, if we have => | 4 | 1 | -1 | and we have to find the unique value. We can simply add all the int to get the unique value(s).
So here we have to find some way so that same numbers cancels out each other and unique number is left.

# Approach
In C++, Bitwise XOR does this thing. For any int N (N ^ N = 0) and (N ^ 0 = N).

# Complexity
- Time complexity: $$O(n)$$
- Space complexity: $$O(1)$$

# Code
```cpp []
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int i : nums){
            ans ^= i;
        }
        return ans;
    }
};
```