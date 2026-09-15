#include <iostream>
#include <string>
using namespace std;

int main()
{
    // string is a C++ Standard Library class used to store text. Unlike a char array, std::string manages its own memory.
    string str1 = "Hello World";
    string str2 = "Sky";

    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;

    // STRING SIZE / LENGTH  |   size() and length() both return the number of characters.
    cout << "\n--- Size / Length ---" << endl;
    cout << "Size: " << str1.size() << endl;
    cout << "Length: " << str1.length() << endl;

    // STRING CONCATENATION
    cout << "\n--- Concatenation ---" << endl;
    string firstName = "Akash";
    string lastName = "Kumar";
    string fullName = firstName + " " + lastName;
    cout << "Full name: " << fullName << endl;

    // LOOP THROUGH STRING - INDEX BASED
    cout << "\n--- Index Based Loop ---" << endl;
    string language = "C++";
    for (int i = 0; i < language.size(); i++)
    {
        cout << language[i] << " ";
    }
    cout << endl;

    // LOOP THROUGH STRING - RANGE BASED
    cout << "\n--- Range Based Loop ---" << endl;
    string greeting = "Hello";
    for (char ch : greeting)
    {
        cout << ch << " ";
    }
    cout << endl;

    // INPUT USING cin  |   cin >> reads only until whitespace.
    cout << "\n--- String Input ---" << endl;
    string wordInput;
    cout << "Enter a word: ";
    cin >> wordInput;
    cout << "You entered: " << wordInput << endl;

    // INPUT USING getline()    |   getline() reads the complete line, including spaces.
    cout << "\n--- getline() ---" << endl;
    string sentence;
    cin.ignore();
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    cout << "You entered: " << sentence << endl;

    // COMPARING STRINGS
    cout << "\n--- String Comparison ---" << endl;
    string a = "apple";
    string b = "apple";
    if (a == b)
    {
        cout << "Strings are equal." << endl;
    }
    if (a != b)
    {
        cout << "Strings are different." << endl;
    }
    return 0;
}