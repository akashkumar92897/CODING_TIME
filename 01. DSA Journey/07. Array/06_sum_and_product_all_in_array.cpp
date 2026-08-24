#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;
    int product = 1;

    for (int i=0; i<size; i++){
        sum += arr[i];
        product *= arr[i];
    }

    cout << "Sum of all elements: " << sum << endl;
    cout << "Product of all elements: " << product << endl;
    return 0;
}