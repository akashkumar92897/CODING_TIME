#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
    // Reverse a character array.
    char chars[] = {'A', 'K', 'A', 'S', 'H', ' ', 'K', 'U', 'M', 'A', 'R', '\0'};

    int start = 0, end = sizeof(chars) / sizeof(chars[0]) - 2;

    while (start < end)
    {
        swap(chars[start], chars[end]);
        start++;
        end--;
    }

    cout << chars << endl;

    // Reverse a C++ String
    string str = "RAMUK HSAKA";
    reverse(str.begin(), str.end());
    cout << str << endl;
    return 0;
}