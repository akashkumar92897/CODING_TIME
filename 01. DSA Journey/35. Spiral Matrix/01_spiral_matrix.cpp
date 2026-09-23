#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>>& matrix)
{
    int m = matrix.size(), n = matrix[0].size();
    int startRow = 0, endRow = m - 1;
    int startCol = 0, endCol = n - 1;
    vector<int> ans;
    while (startRow <= endRow && startCol <= endCol)
    {
        // Top Boundary
        for (int j = startCol; j <= endCol; j++)
        {
            ans.push_back(matrix[startRow][j]);
        }
        // Right Boundary
        for (int i = startRow + 1; i <= endRow; i++)
        {
            ans.push_back(matrix[i][endCol]);
        }
        // Bottom Boundary
        for (int j = endCol - 1; j >= startCol; j--)
        {
            if (startRow == endRow)
            {
                break;
            }
            ans.push_back(matrix[endRow][j]);
        }
        // Left Boundary
        for (int i = endRow - 1; i >= startRow + 1; i--)
        {
            if (startCol == endCol)
            {
                break;
            }
            ans.push_back(matrix[i][startCol]);
        }
        startRow++, endRow--, startCol++, endCol--;
    }
    return ans;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    vector<int> ans = spiralMatrix(matrix);
    
    for (int i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}

// Time Complexity = O(m*n)
// Space Complexity = O(m*n)
// Auxiliary Space = O(1)