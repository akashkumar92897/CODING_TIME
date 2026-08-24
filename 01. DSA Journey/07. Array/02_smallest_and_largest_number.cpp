#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int nums[] = {5, 8, 6, -2, 1, 0};
    int size = sizeof(nums) / sizeof(nums[0]);

    int smallest = INT_MAX;
    int smallest_idx = 0;

    int largest = INT_MIN;
    int largest_idx = 0;

    for (int i = 0; i < size; i++)
    {
        if (nums[i] < smallest)
        {
            smallest = nums[i];
            smallest_idx = i;
        }

        if (nums[i] > largest)
        {
            largest = nums[i];
            largest_idx = i;
        }
    }

    // Implicit function built-in in C++    --> min and max
    // smallest = min(nums[i], smallest);
    // largest = max(nums[i], largest);

    cout << "Smallest number is: " << smallest << endl;
    cout << "idx of smallest number is: " << smallest_idx << endl;

    cout << "Largest number is: " << largest << endl;
    cout << "idx of largest number is: " << largest_idx << endl;

    return 0;
}