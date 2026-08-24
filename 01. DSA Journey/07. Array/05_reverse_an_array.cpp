// This approach is commonly known as the Two-Pointer Approach.

#include <iostream>
using namespace std;

void reverseArr(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "----------Original Array---------- \n"; 
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArr(arr, size);

    cout << "----------Reversed Array---------- \n"; 

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}