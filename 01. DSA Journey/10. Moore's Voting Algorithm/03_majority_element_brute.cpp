// Majority Element => Brute Force Approach
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {1, 2, 2, 1, 1};
    for (int val : vec)
    {
        int freq = 0;
        for (int element : vec)
        {
            if (element == val)
            {
                freq++;
            }
        }
        if (freq > vec.size() / 2)
        {
            cout << val << " ";
        }
    }
    return 0;
}

// Time Complexity = O(n^2)