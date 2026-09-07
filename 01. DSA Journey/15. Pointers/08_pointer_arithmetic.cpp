#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a;

    // Increment & Decrement Operators => No of bytes of the particular type.
    cout << ptr << endl; // address of a
    ptr++;
    cout << ptr << endl; // +4 bytes
    ptr--;
    cout << ptr << endl; // -4 bytes = address of a
    ++ptr;
    cout << ptr << endl; // 4 bytes

    // Add & Subtract Number => Equals to number of bytes to particular integer.
    ptr += 1;
    cout << ptr << endl; // 4 bytes
    ptr -= 2;
    cout << ptr << endl; // -8 bytes

    // Subtract Pointer => Only applicable with same type of pointers
    int *point1;
    int *point2 = point1 + 4;
    cout << point2 - point1 << endl; // 4 bytes

    // Comparison Operators => (<, <=, >, >=, ==, !=)
    cout << (point1 > point2) << endl;  // 0
    cout << (point1 >= point2) << endl; // 0
    cout << (point1 < point2) << endl;  // 1
    cout << (point1 <= point2) << endl; // 1
    cout << (point1 == point2) << endl; // 0
    cout << (point1 != point2) << endl; // 1
    
    return 0;
}