// Optimized Space Complexity
#include <iostream>
#include <vector>
using namespace std;

void helper(vector<vector<int>> &maze, int row, int col, string path, vector<string> &ans)
{
    int n = maze.size();

    // Base Case to validate cell idx.
    if (row < 0 || col < 0 || row >= n || col >= n || maze[row][col] == 0 || maze[row][col] == -1)
        return;

    // Base case to return final ans.
    if (row == n - 1 && col == n - 1)
    {
        ans.push_back(path);
        return;
    }

    // visited once.
    maze[row][col] = -1;

    // Directions Condition
    helper(maze, row + 1, col, path + "D", ans); // Down
    helper(maze, row - 1, col, path + "U", ans); // Up
    helper(maze, row, col - 1, path + "L", ans); // Left
    helper(maze, row, col + 1, path + "R", ans); // Right

    maze[row][col] = 1; // Backtracking stage, unvisited mark.
}

vector<string> findPath(vector<vector<int>> maze)
{
    int n = maze.size();
    vector<string> ans;
    string path = "";
    helper(maze, 0, 0, path, ans);
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
// Output Space = O(S * n^2) => S = no. of valid paths.