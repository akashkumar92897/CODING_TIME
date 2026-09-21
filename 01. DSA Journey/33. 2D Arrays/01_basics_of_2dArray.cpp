#include <iostream>
using namespace std;
int main()
{
    // Initialisation of 2D array (Matrix) => Rows = 4, Columns = 3.
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int rows = 4, cols = 3;

    // Access elements
    cout << matrix[2][0] << endl; // 7
    cout << matrix[0][1] << endl; // 2
    cout << matrix[1][2] << endl; // 6

    cout << "---------- Access elements using loops ----------" << endl;
    // Output of elements using loops
    for (int i = 0; i < rows; i++) // i = rows (outer loop)
    {
        for (int j = 0; j < cols; j++) // j = cols (inner loop)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "---------- Taking input elements from user ----------" << endl;
    int mat[3][4];
    int row = 3, col = 4;

    // Input loop
    for (int i = 0; i < row; i++) // i = rows (outer loop)
    {
        for (int j = 0; j < col; j++) // j = cols (inner loop)
        {
            cin >> mat[i][j];
        }
    }

    // Output loop
    for (int i = 0; i < row; i++) // i = rows (outer loop)
    {
        for (int j = 0; j < col; j++) // j = cols (inner loop)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}