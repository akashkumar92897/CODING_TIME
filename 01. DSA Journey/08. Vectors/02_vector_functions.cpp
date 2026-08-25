#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;
    cout << "Size of vec = " << vec.size() << endl;     // 0

    vec.push_back(1); // Add 1 at the end of vec
    vec.push_back(2); // Add 2 at the end of vec
    vec.push_back(3); // Add 3 at the end of vec
    vec.push_back(4); // Add 4 at the end of vec
    vec.push_back(5); // Add 5 at the end of vec
    vec.push_back(6); // Add 6 at the end of vec

    for (int i : vec)
    {
        cout << i << " ";       // | 1 | 2 | 3 | 4 | 5 | 6 |
    }
    cout << endl;

    vec.pop_back(); // Removes the last element of the vector.

    cout << "Size of vec = " << vec.size() << endl; // 5

    cout << vec.front() << endl;    // first value of vec = 1
    cout << vec.back() << endl;     // last value of vec = 5
    cout << vec.at(3) << endl;      // ith idx value = 4

    cout << vec.capacity() << endl; // 8

    return 0;
}