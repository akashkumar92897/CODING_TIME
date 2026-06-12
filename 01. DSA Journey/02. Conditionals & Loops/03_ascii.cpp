#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    int ascii = int(ch);  // Convert char to ASCII value

    if (ascii >= 65 && ascii <= 90) {
        cout << "Uppercase letter\n";
    } 
    else if (ascii >= 97 && ascii <= 122) {
        cout << "Lowercase letter\n";
    } 
    else {
        cout << "Not an alphabet character\n";
    }

    cout << "ASCII value: " << ascii << endl;

    return 0;
}