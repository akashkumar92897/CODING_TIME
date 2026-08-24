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

    cout << "----------Original Array---------- \n";

    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    swap(nums[largest_idx], nums[smallest_idx]);

    cout << "----------Swapped Array---------- \n";
    
    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}