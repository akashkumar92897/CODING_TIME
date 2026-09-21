#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int getRowSum(int matrix[4][3], int rows, int cols)
{
    int maxRowSum = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        int currRowSum = 0;
        for (int j = 0; j < cols; j++)
        {
            currRowSum += matrix[i][j];
        }
        maxRowSum = max(currRowSum, maxRowSum);
    }
    return maxRowSum;
}

int main()
{
    int matrix[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}};

    int rows = 4, cols = 3;
    cout << getRowSum(matrix, rows, cols) << endl;  // 33

    return 0;
}

// Time Complexity = O(rows * cols)
// Space Complexity = O(1)