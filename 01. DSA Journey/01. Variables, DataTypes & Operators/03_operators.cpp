#include <iostream>
using namespace std;
int main() {
    // 1. Arithmetic Operators
    int a = 10, b = 3;
    cout << "Arithmetic Operators:\n";
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    // 2. Relational Operators
    cout << "\nRelational Operators:\n";
    cout << (a == b) << endl;
    cout << (a != b) << endl;
    cout << (a > b) << endl;
    cout << (a < b) << endl;
    cout << (a >= b) << endl;
    cout << (a <= b) << endl;

    // 3. Logical Operators
    bool x = true, y = false;
    cout << "\nLogical Operators:\n";
    cout << (x && y) << endl;
    cout << (x || y) << endl;
    cout << (!x) << endl;

    // 4. Assignment Operators
    int c = 5;
    cout << "\nAssignment Operators:\n";
    c += 2; cout << "c += 2: " << c << endl;
    c -= 1; cout << "c -= 1: " << c << endl;
    c *= 3; cout << "c *= 3: " << c << endl;
    c /= 2; cout << "c /= 2: " << c << endl;
    c %= 2; cout << "c %= 2: " << c << endl;

    // 5. Unary Operators
    int u = 5;
    cout << "\nUnary Operators:\n";
    cout << "++u: " << ++u << endl;
    cout << "u++: " << u++ << endl;
    cout << "--u: " << --u << endl;
    cout << "u--: " << u-- << endl;

    // 6. Bitwise Operators
    int p = 5, q = 3;
    cout << "\nBitwise Operators:\n";
    cout << "p & q: " << (p & q) << endl;
    cout << "p | q: " << (p | q) << endl;
    cout << "p ^ q: " << (p ^ q) << endl;
    cout << "~p: " << (~p) << endl;
    cout << "p << 1: " << (p << 1) << endl;
    cout << "p >> 1: " << (p >> 1) << endl;

    // 7. Ternary Operator
    cout << "\nTernary Operator:\n";
    int maxVal = (a > b) ? a : b;
    cout << "Max of a and b: " << maxVal << endl;

    // 8. Special Operators
    cout << "\nSpecial Operators:\n";
    cout << "Size of int: " << sizeof(int) << endl;

    // 9. Type-related Operators
    cout << "\nType Casting:\n";
    double d = 5.7;
    int casted = (int)d; // C-style cast
    cout << "Casted int: " << casted << endl;

    double d2 = static_cast<double>(a) / b;
    cout << "static_cast result: " << d2 << endl;

    return 0;
}