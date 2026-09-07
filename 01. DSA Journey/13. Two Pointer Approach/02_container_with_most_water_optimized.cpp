// Container With Most Water => Optimized using 2 Pointer approach
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = 9;
    int maxWater = 0, leftPoint = 0, rightPoint = n-1;

    while (leftPoint < rightPoint){
        int width =  rightPoint - leftPoint;
        int minHeight = min(height[leftPoint], height[rightPoint]);
        int currWater = width * minHeight;
        maxWater = max(maxWater, currWater); 

        height[leftPoint] < height[rightPoint] ? leftPoint++ : rightPoint--;
    }

    cout << "Maximum amount of Water container can have : " << maxWater << endl;
    return 0;
}