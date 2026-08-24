#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 1, 2, 3, 5, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Unique values: ";

    for (int i = 0; i < size; i++)
    {
        int count = 0;

        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count == 1)
        {
            cout << arr[i] << " ";
        }
    }

    cout << endl;

    return 0;
}