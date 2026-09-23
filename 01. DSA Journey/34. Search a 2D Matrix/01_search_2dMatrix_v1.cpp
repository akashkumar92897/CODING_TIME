#include <iostream>
#include <vector>
using namespace std;

bool searchInRow(vector<vector<int>> matrix, int target, int row) // O(logn)
{
    int n = matrix[0].size(), start = 0, end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target == matrix[row][mid])
        {
            return true;
        }
        else if (target > matrix[row][mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;
}

bool searchMatrix(vector<vector<int>> matrix, int target) // O(logm)
{
    // Search Correct Row
    int m = matrix.size(), n = matrix[0].size();
    int startRow = 0, endRow = m - 1;

    while (startRow <= endRow)
    {
        int midRow = startRow + (endRow - startRow) / 2;
        if (matrix[midRow][0] <= target && target <= matrix[midRow][n - 1])
        { // Target is in the midRow
            return searchInRow(matrix, target, midRow);
        }
        else if (target > matrix[midRow][n - 1])
        { // Target is in next of the midRow
            startRow = midRow + 1;
        }
        else
        { // Target is in before the midROw
            endRow = midRow - 1;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 34;
    cout << searchMatrix(matrix, target);
    return 0;
}

// Time Complexity = O(log(m*n))
// Space Complexity = O(1)