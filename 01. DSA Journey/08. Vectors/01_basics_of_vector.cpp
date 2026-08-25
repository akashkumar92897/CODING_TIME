#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vect; // size 0
    // cout << vect[0]; --> Segmentation fault

    vector<int> vec = {1, 2, 3};
    cout << vec[0] << endl; // 1
    cout << vec[1] << endl; // 2
    cout << vec[2] << endl; // 3

    vector<int> vec1(3, 0); // Size 3 vector, having each value 0 -> | 0 | 0 | 0 |
    for (int i : vec1)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}