// Linear Search in a 2D array
#include <iostream>
#include <utility>
using namespace std;

// Always pass column of matrix, row can or can't be passed.
bool Search(int matrix[][3], int rows, int cols, int target)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

// Column size must be specified when passing a 2D array.
pair<int, int> linearSearch(int matrix[][3], int rows, int cols, int target)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == target)
            {
                return {i, j};
            }
        }
    }

    // Target not found
    return {-1, -1};
}

int main()
{
    int matrix[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}};

    int rows = 4;
    int cols = 3;
    int target = 6;

    pair<int, int> result = linearSearch(matrix, rows, cols, target);

    if (result.first != -1)
    {
        cout << "Target " << target
             << " found at: ["
             << result.first << "]["
             << result.second << "]"
             << endl;
    }
    else
    {
        cout << "Target " << target << " not found." << endl;
    }

    return 0;
}

// Time Complexity = O(rows * cols)
// Space Complexity = O(1)