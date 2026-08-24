#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {4, 2, 7, 8, 1, 2, 5};
    int arr2[] = {1, 2, 3, 1, 2, 3, 5};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Intersection: ";

    for (int i = 0; i < size1; i++)
    {
        bool found = false;

        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                found = true;
                break;
            }
        }

        if (found)
        {
            cout << arr1[i] << " ";
        }
    }

    cout << endl;

    return 0;
}