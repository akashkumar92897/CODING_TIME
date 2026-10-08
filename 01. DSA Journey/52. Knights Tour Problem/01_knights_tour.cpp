#include <iostream>
#include <vector>
using namespace std;

bool helper(vector<vector<int>> &grid, int row, int col, int n, int expValue)
{
    // Invalid Base case
    if (row < 0 || col < 0 || row >= n || col >= n || grid[row][col] != expValue)
        return false;
    // Valid Base case
    if (expValue == n * n - 1)
        return true;

    // 8 Possible Moves
    return helper(grid, row - 2, col + 1, n, expValue + 1) ||
           helper(grid, row - 1, col + 2, n, expValue + 1) ||
           helper(grid, row + 1, col + 2, n, expValue + 1) ||
           helper(grid, row + 2, col + 1, n, expValue + 1) ||
           helper(grid, row + 2, col - 1, n, expValue + 1) ||
           helper(grid, row + 1, col - 2, n, expValue + 1) ||
           helper(grid, row - 1, col - 2, n, expValue + 1) ||
           helper(grid, row - 2, col - 1, n, expValue + 1);
}

bool checkValidGrid(vector<vector<int>> &grid)
{
    return helper(grid, 0, 0, grid.size(), 0);
}

int main()
{
    // Valid Knight's Tour configuration
    vector<vector<int>> grid1 = {
        {0, 11, 16, 5, 20},
        {17, 4, 19, 10, 15},
        {12, 1, 8, 21, 6},
        {3, 18, 23, 14, 9},
        {24, 13, 2, 7, 22}};

    // Check the valid configuration.
    if (checkValidGrid(grid1))
        cout << "Valid Knight's Tour" << endl;
    else
        cout << "Invalid Knight's Tour" << endl;

    // Invalid Knight's Tour configuration
    vector<vector<int>> grid2 = {
        {0, 3, 6},
        {5, 8, 1},
        {2, 7, 4}};

    // Check the invalid configuration.
    if (checkValidGrid(grid2))
        cout << "Valid Knight's Tour" << endl;
    else
        cout << "Invalid Knight's Tour" << endl;
    return 0;
}

// Time Complexity = O(n^2)
// Space Complexity = O(n^2)