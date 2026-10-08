// Count Inversion => Brute Force Approach
#include <iostream>
#include <vector>
using namespace std;

int countInversion(vector<int> &nums){
    int count = 0;
    for(int i=0; i<nums.size(); i++){
        for (int j=i+1; j<nums.size(); j++){
            if(nums[i] > nums[j]){
                count ++;
            }
        }
    }
    return count;
}

int main(){
    vector <int> nums = {6, 3, 5, 2, 7};
    cout << "Total no. of inversions : " << countInversion(nums);
    return 0;
}

// Time Complexity = O(n^2)
// Space Complexity = O(1)