#include <iostream>
using namespace std;
void printNums(int n)
{ // Recursive Function
    if (n == 1)
    {
        cout << "1\n";
        return;
    }
    cout << n << " "; // n => n-1 => n-2.....
    printNums(n - 1);
}

int main()
{
    int n = 10;
    printNums(n);
    return 0;
}

// Time Complexity = O(n)
// Space Complexity = O(n)