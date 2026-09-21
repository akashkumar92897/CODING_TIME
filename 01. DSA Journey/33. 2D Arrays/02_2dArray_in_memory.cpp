#include <iostream>
using namespace std;
int main()
{
    int arr[2][3] = {
        {10, 20, 30},
        {40, 50, 60}};

    cout << addressof(arr) << endl; // Gives address of cell (0,0)
    cout << "---------- Adress of 2D array row major : Row [0] ----------" << endl;
    cout << addressof(arr[0][0]) << endl; // Gives address of cell (0,0)
    cout << addressof(arr[0][1]) << endl; // Gives address of cell (0,1)
    cout << addressof(arr[0][2]) << endl; // Gives address of cell (0,2)

    cout << "---------- Adress of 2D array row major : Row [1] ----------" << endl;
    cout << addressof(arr[1][0]) << endl; // Gives address of cell (1,0)
    cout << addressof(arr[1][1]) << endl; // Gives address of cell (1,1)
    cout << addressof(arr[1][2]) << endl; // Gives address of cell (1,2)

    // My output represents the 2d array is stored in "Row Major" way.

    return 0;
}