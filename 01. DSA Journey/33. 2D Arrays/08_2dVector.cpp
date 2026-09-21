#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // ============================================================
    // 1. Initialisation of 2D Vector (Matrix)
    // ============================================================

    // 4 Rows, 3 Columns
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };

    // Number of rows
    int rows = matrix.size();

    // Number of columns in a particular row
    int cols = matrix[0].size();

    cout << "Rows: " << rows << endl;
    cout << "Columns: " << cols << endl;
    cout << endl;


    // ============================================================
    // 2. Access elements
    // ============================================================

    cout << matrix[2][0] << endl; // 7
    cout << matrix[0][1] << endl; // 2
    cout << matrix[1][2] << endl; // 6

    cout << endl;


    // ============================================================
    // 3. Access elements using loops
    // ============================================================

    cout << "---------- Access elements using loops ----------" << endl;

    for (int i = 0; i < matrix.size(); i++) // i = rows
    {
        for (int j = 0; j < matrix[i].size(); j++) // j = columns
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;


    // ============================================================
    // 4. Taking input elements from user
    // ============================================================

    cout << "---------- Taking input elements from user ----------" << endl;

    int row = 3;
    int col = 4;

    vector<vector<int>> mat(row, vector<int>(col));

    // Input loop
    for (int i = 0; i < mat.size(); i++) // i = rows
    {
        for (int j = 0; j < mat[i].size(); j++) // j = columns
        {
            cin >> mat[i][j];
        }
    }

    // Output loop
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;


    // ============================================================
    // 5. Number of rows and columns
    // ============================================================

    cout << "---------- Rows and Columns ----------" << endl;

    cout << "Number of rows: " << matrix.size() << endl;

    // Number of columns in row 0
    cout << "Columns in row 0: " << matrix[0].size() << endl;

    // Number of columns in row 1
    cout << "Columns in row 1: " << matrix[1].size() << endl;

    cout << endl;


    // ============================================================
    // 6. Adding an element to a particular row
    // ============================================================

    cout << "---------- Adding element to a particular row ----------" << endl;

    // Add 100 to row 1
    matrix[1].push_back(100);

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;


    // ============================================================
    // 7. Adding a new row
    // ============================================================

    cout << "---------- Adding a new row ----------" << endl;

    matrix.push_back({13, 14, 15});

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;


    // ============================================================
    // 8. Adding a new column to every row
    // ============================================================

    cout << "---------- Adding a new column ----------" << endl;

    // Add one element to every row
    for (int i = 0; i < matrix.size(); i++)
    {
        matrix[i].push_back(0);
    }

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;


    // ============================================================
    // 9. Important: 2D vectors can have different column sizes
    // ============================================================

    cout << "---------- Jagged 2D Vector ----------" << endl;

    vector<vector<int>> jagged = {
        {1, 2, 3},
        {4, 5},
        {6, 7, 8, 9}
    };

    for (int i = 0; i < jagged.size(); i++)
    {
        for (int j = 0; j < jagged[i].size(); j++)
        {
            cout << jagged[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}