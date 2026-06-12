#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase letter\n";
    } 
    else if (ch >= 'a' && ch <= 'z') {
        cout << "Lowercase letter\n";
    } 
    else {
        cout << "Not an alphabet character\n";
    }

    return 0;
}