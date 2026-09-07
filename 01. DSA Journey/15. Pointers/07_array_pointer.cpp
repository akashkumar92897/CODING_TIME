#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    // array is a constant pointer, which can't be modified.
    // arr always points at the address of 0th idx => 1

    cout << &arr << endl; // address of 0th idx
    cout << *arr << endl; // value at 0th idx = 1

    // Modifiable & Constant Pointer
    int a = 5, b = 9;
    int *ptr = &a;
    ptr = &b;

    cout << ptr << endl; // address of b, it is easily modifiable.

    // arr = *a;   // It is not possible, because arr is a constant pointer

    // Array using add & sub
    cout << *(arr) << endl;   // 0th idx = 1
    cout << *(arr+1) << endl;   // 1st idx = 2
    cout << *(arr+2) << endl;   // 2nd idx = 3
    cout << *(arr+3) << endl;   // 3rd idx = 4
    cout << *(arr+4) << endl;   // 4th idx = 5
    return 0;
}