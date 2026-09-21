#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

// This function give T.C = O(n^2), more optimsed is next function.
// int diagonalSum(int matrix[4][4], int n)
// {
//     int currSum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (i == j) // Primary Diagonal
//             {
//                 currSum += matrix[j][i];
//             }
//             else if (j == n - 1 - i) // Seconday Diagonal
//             {
//                 currSum += matrix[j][i];
//             }
//         }
//     }
//     return currSum;
// }

int diagonalSum(int matrix[4][4], int n)
{
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum += matrix[i][i];
        if (i != n - 1 - i)
        {
            currSum += matrix[i][n - 1 - i];
        }
    }
    return currSum;
}

int main()
{
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    int n = 4;
    cout << diagonalSum(matrix, n) << endl; // 68

    return 0;
}

// Time Complexity = O(n)
// Space Complexity = O(1)