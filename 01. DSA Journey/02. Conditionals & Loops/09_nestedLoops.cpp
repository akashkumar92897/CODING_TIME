#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {          // Outer loop (rows)
        for (int j = 1; j <= n; j++) {      // Inner loop (columns)
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}