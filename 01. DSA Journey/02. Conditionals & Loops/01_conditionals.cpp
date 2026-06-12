#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // 1. Simple if
    if (num > 0) {
        cout << "Number is positive\n";
    }

    // 2. if-else
    if (num % 2 == 0) {
        cout << "Even number\n";
    } else {
        cout << "Odd number\n";
    }

    // 3. if - else-if - else ladder
    if (num > 0) {
        cout << "Positive\n";
    } else if (num < 0) {
        cout << "Negative\n";
    } else {
        cout << "Zero\n";
    }

    // 4. Nested if
    if (num >= 0) {
        if (num < 10) {
            cout << "Single digit non-negative number\n";
        }
    }

    // 5. Switch case
    int choice;
    cout << "\nEnter a number (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You selected One\n";
            break;
        case 2:
            cout << "You selected Two\n";
            break;
        case 3:
            cout << "You selected Three\n";
            break;
        default:
            cout << "Invalid choice\n";
    }

    // 6. Ternary Operator
    string result = (num >= 0) ? "Non-negative" : "Negative";
    cout << "\nUsing ternary: " << result << endl;

    return 0;
}