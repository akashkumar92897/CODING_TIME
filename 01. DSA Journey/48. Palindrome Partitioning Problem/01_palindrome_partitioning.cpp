#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Check whether a string is a palindrome.
bool isPalindrome(string s)
{
    string s2 = s;
    reverse(s2.begin(), s2.end());
    return s == s2;
}

// Generate all possible palindrome partitions using backtracking.
void helper(string s, vector<string> &partitions, vector<vector<string>> &ans)
{
    // Base Case
    if (s.size() == 0)
    {
        ans.push_back(partitions);
        return;
    }
    // Try every possible prefix of the remaining string.
    for (int i = 0; i < s.size(); i++)
    {
        string part = s.substr(0, i + 1);
        if (isPalindrome(part))
        {
            partitions.push_back(part);
            helper(s.substr(i + 1), partitions, ans);
            // Backtrack
            partitions.pop_back();
        }
    }
}

vector<vector<string>> partition(string s)
{
    vector<vector<string>> ans;
    vector<string> partitions;

    helper(s, partitions, ans);
    return ans;
}

int main()
{
    string s = "aab";
    vector<vector<string>> result = partition(s);
    for (vector<string> partitions : result)
    {
        for (string part : partitions)
        {
            cout << part << " ";
        }
        cout << endl;
    }
    return 0;
}

// Time Complexity = Exponential
// Space Complexity = O(n)