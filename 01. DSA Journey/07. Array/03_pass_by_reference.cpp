#include <iostream>
using namespace std;

void changeArr(int arr[], int size)
{
    cout << "In Function \n";
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
    }
}

int main()
{
    int arr[] = {1, 2, 3};
    int size = 3;

    changeArr(arr, 3);

    cout << "In Main \n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " "; // 2 4 6
    }

    cout << endl;

    return 0;
}