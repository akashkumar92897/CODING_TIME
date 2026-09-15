#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    // Char array, but invalid C-style string, b/c it doesn't have termination.
    char str1[] = {'a', 'b', 'c'};
    cout << str1 << endl; // abc___

    // It is a proper C-style string
    char str2[] = {'a', 'b', 'c', '\0'};
    cout << str2 << endl;
    cout << strlen(str2) << endl; // 3

    // '\0' is part of the array, but it is NOT part of the string's length.

    char str3[] = "hello";        // String literals
    cout << strlen(str3) << endl; // 5
    cout << str3[1] << endl;      // e
    cout << str3[5] << endl;      // '\0' is the null character, whose character representation produces no visible output.

    cout << (str3[5] == '\0') << endl; // 1
    cout << sizeof(str3) << endl;      // 6

    // Input in char array
    char str4[12];
    cout << "Enter char arr : ";
    // cin >> str4; // Drawback is we can't input multi words with spaces.
    cin.getline(str4, 12, '%');
    cout << "Output : " << str4 << endl;

    // Output of each char
    for (char ch : str4)
    {
        cout << ch << " ";
    }
    cout << endl;

    // Length of char arr using loop.
    char str5[] = "This is a C++ character array";
    int len = 0;
    for (int i = 0; i < str5[i] != '\0'; i++)
    {
        len++;
    }
    cout << "Length of str5 is: " << len << endl;

    return 0;
}