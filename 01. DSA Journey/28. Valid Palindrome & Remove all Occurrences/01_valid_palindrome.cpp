#include <iostream>
#include <cctype>
using namespace std;

// bool isAlphaNum(char ch)
// {
//     if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
//     {
//         return true;
//     }
//     return false;
// }
// !isalnum(ch) =>  is a built in function in cpp to check if char is alphanumeric or not.

bool isPlaindrome(string s)
{
    int start = 0, end = s.length() - 1;
    while (start < end)
    {
        if (!isalnum(s[start]))
        {
            start++;
            continue;
        }
        if (!isalnum(s[end]))
        {
            end--;
            continue;
        }
        if (tolower(s[start]) != tolower(s[end]))
        {
            return false;
        }
        start++, end--;
    }
    return true;
}

int main()
{
    string s = "AC3?e3c&a";

    cout << "Is given string a plaindrome? : " << isPlaindrome(s);

    return 0;
}

// Time Complexity = O(n)
// Space Complexity = O(1)