// Container With Most Water => Brute Force Approach
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = 9;
    int maxWater = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int width = j - i;
            int minHeight = min(height[i], height[j]);
            int currWater = width * minHeight;
            maxWater = max(maxWater, currWater);
        }
    }

    cout << "Maximum amount of Water container can have : " << maxWater << endl;

    return 0;
}

// Time Complexity = O(n^2)
// Constraint => n <= 10^5, but atmost 10^8 operations are required. Therefor for O(n^2), constraint comes in picture, so this is not most optimal approach.