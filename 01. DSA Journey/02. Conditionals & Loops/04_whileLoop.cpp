#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int count = 1;      // initialization
    while (count <= n) {        // condition
        cout << count << " ";
        count++;        // update
    }

    return 0;
}