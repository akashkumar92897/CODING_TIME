#include <iostream>
using namespace std;
int main() {
    // 1. Variable Declaration & Data Types
    int age = 22;
    float height = 5.11f;
    double preciseValue = 3.1415926535;
    char grade = 'A';
    bool isStudent = true;

    // 2. Multiple Variables
    int x = 10, y = 3;
    int sum = x + y;

    // 3. Constant Variable
    const double PI = 3.14159;

    // 4. User Input
    string name;
    int userAge;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> userAge;

    // 5. Type Casting
    double division1 = x / y;              // integer division
    double division2 = (double)x / y;     // explicit casting

    // 7. Size of Data Types
    cout << "\n--- Size of Data Types ---" << endl;
    cout << "int: " << sizeof(age) << " bytes" << endl;
    cout << "float: " << sizeof(height) << " bytes" << endl;
    cout << "double: " << sizeof(preciseValue) << " bytes" << endl;
    cout << "char: " << sizeof(grade) << " bytes" << endl;
    cout << "bool: " << sizeof(isStudent) << " bytes" << endl;

    // 8. Output All Data
    cout << "\n--- User Info ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << userAge << endl;

    cout << "\n--- Program Variables ---" << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Precise Value: " << preciseValue << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Student: " << isStudent << endl;

    cout << "\nSum (x + y): " << sum << endl;
    cout << "Division without casting: " << division1 << endl;
    cout << "Division with casting: " << division2 << endl;
    cout << "Constant PI: " << PI << endl;

    // 9. ASCII Value
    cout << "\nASCII of grade '" << grade << "' is: " << int(grade) << endl;

    // 10. Overflow Example
    char overflowChar = 127;
    overflowChar = overflowChar + 1;
    cout << "Overflowed char value: " << int(overflowChar) << endl;

    return 0;
}