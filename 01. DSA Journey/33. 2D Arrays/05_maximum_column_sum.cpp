#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int getColumnSum(int matrix[4][3], int rows, int cols)
{
    int maxColSum = INT_MIN;
    for (int i = 0; i < cols; i++)
    {
        int currColSum = 0;
        for (int j = 0; j < rows; j++)
        {
            currColSum += matrix[j][i];
        }
        maxColSum = max(currColSum, maxColSum);
    }
    return maxColSum;
}

int main()
{
    int matrix[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}};

    int rows = 4, cols = 3;
    cout << getColumnSum(matrix, rows, cols) << endl;  // 30

    return 0;
}

// Time Complexity = O(rows * cols)
// Space Complexity = O(1)