#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int> &arr)
{
    int slow = arr[0], fast = arr[0];
    do
    {
        slow = arr[slow]; // +1
        fast = arr[arr[fast]]; // +2
    } while (slow != fast);
    slow = arr[0];
    while (slow != fast)
    {
        slow = arr[slow]; // +1
        fast = arr[fast]; // +1
    }
    return slow;
}

int main()
{
    vector<int> arr = {3, 1, 3, 4, 2};
    cout << findDuplicate(arr);
    return 0;
}

// Time Complexity = O(n)
// Space Complexity = O(1)