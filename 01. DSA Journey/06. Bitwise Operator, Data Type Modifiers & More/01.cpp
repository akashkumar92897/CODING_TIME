#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 8;

    cout << (a & b) << endl;    // 0
    cout << (a | b) << endl;    // 12
    cout << (a ^ b) << endl;    // 12

    cout << (4 << 1) << endl;   // 8
    cout << (9 >> 1) << endl;   // 4
    return 0;
}