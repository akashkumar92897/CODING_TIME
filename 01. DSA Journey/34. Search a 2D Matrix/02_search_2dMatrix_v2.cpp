#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>> matrix, int target)
{
    int m = matrix.size(), n = matrix[0].size();
    int row = 0, col = n - 1; // Assumed mid cell
    while (row < m && col >= 0)
    {
        if (target == matrix[row][col])
        {
            return true;
        }
        else if (target > matrix[row][col])
        {
            row++;
        }
        else
        {
            col--;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}};
    int target = 5;
    cout << searchMatrix(matrix, target);
    return 0;
}

// Time Complexity = O(n + m)
// Space Complexity = O(1)