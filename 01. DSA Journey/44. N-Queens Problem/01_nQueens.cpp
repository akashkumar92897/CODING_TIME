#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<string> &board, int row, int col, int n) // O(n)
{ 
    // Horizontal
    for (int j = 0; j < n; j++)
    {
        if (board[row][j] == 'Q')
            return false;
    }

    // Vertical
    for (int i = 0; i < n; i++)
    {
        if (board[i][col] == 'Q')
            return false;
    }

    // Left Diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 'Q')
            return false;
    }

    // Right Diagonal
    for (int i = row, j = col; i >= 0 && j < n; i--, j++)
    {
        if (board[i][j] == 'Q')
            return false;
    }

    // No queen can attack this position
    return true;
}

void nQueens(vector<string> &board, int row, int n, vector<vector<string>> &ans)
{
    // Base Case
    if (row == n)
    {
        ans.push_back(board);
        return;
    }

    for (int j = 0; j < n; j++)
    {
        if (isSafe(board, row, j, n))
        {
            board[row][j] = 'Q';
            nQueens(board, row + 1, n, ans);
            board[row][j] = '.';
        }
    }
}

vector<vector<string>> solveNQueens(vector<string> &board, int n)
{
    vector<vector<string>> ans;
    nQueens(board, 0, n, ans);
    return ans;
}

int main()
{
    int n = 5;
    vector<string> board(n, string(n, '.'));

    vector<vector<string>> result = solveNQueens(board, n);

    for (vector<string> solution : result)
    {
        for (string row : solution)
        {
            cout << row << endl;
        }
        cout << endl;
    }

    return 0;
}

// Time Complexity = O(n * n!)
// Auxiliary Space = O(n^2)
// Output Space = O(S * n^2) => S = number of solutions.