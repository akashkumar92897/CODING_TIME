#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a; // Pointer creation

    cout << "Value of variable a is : " << a << endl;
    cout << "Address of variable a is : " << &a << endl;
    cout << "Value of pointer ptr is : " << &a << endl;
    cout << "Address of pointer ptr is : " << &ptr << endl;

    // Pointer to Pointer => Stores address of another pointer
    int **ptr2 = &ptr;
    cout << "Value of pointer ptr2 is : " << ptr2 << endl;
    cout << "Address of pointer ptr2 is : " << &ptr2 << endl;

    // Dereference Operator = Value at an address = *
    cout << "Value at a using * : " << *(&a) << endl;        // 10
    cout << "Value at ptr using * : " << *(ptr) << endl;     // 10
    cout << "Value at ptr using * : " << *(&ptr) << endl;    // address of a
    cout << "Value at ptr2 using * : " << **(&ptr2) << endl; // address of a
    cout << "Value at ptr2 using * : " << **(ptr2) << endl;  // 10

    // NULL Pointer
    int *ptr3 = NULL;
    cout << "Address of ptr3 of NULL pointer is : " << ptr3 << endl;

    // If we don't assign any value, still it will have some random memory address. To be clear about no address, "NULL" is used
    // Dereference of "NULL" pointer is invalid => Segmentation error.

    return 0;
}