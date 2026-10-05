#include <iostream>
#include <vector>
using namespace std;

void helper(vector<vector<int>> &maze, int row, int col, string path, vector<string> &ans, vector<vector<bool>> &visited)
{
    int n = maze.size();

    // Base Case to validate cell idx.
    if (row < 0 || col < 0 || row >= n || col >= n || maze[row][col] == 0 || visited[row][col] == true)
        return;

    // Base case to return final ans.
    if (row == n - 1 && col == n - 1)
    {
        ans.push_back(path);
        return;
    }

    // Remark cell as T, since visited once.
    visited[row][col] = true;

    // Directions Condition
    helper(maze, row + 1, col, path + "D", ans, visited); // Down
    helper(maze, row - 1, col, path + "U", ans, visited); // Up
    helper(maze, row, col - 1, path + "L", ans, visited); // Left
    helper(maze, row, col + 1, path + "R", ans, visited); // Right

    visited[row][col] = false; // Backtracking stage, where remark cell as F to get another paths.
}

vector<string> findPath(vector<vector<int>> maze)
{
    int n = maze.size();
    vector<string> ans;
    string path = "";
    // Initialise a visited matrix with all F value.
    vector<vector<bool>> visited(n, vector<bool> (n, false));

    helper(maze, 0, 0, path, ans, visited);
    return ans;
}

int main()
{
    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}};

    vector<string> result = findPath(maze);

    for (string path : result)
    {
        cout << path << endl;
    }

    return 0;
}

// Time Complexity = O(4^(n^2))
// Auxiliary Space = O(n^2)