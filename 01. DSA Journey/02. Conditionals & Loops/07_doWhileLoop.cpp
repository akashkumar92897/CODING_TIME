#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int i = 1;
    cout << "\n1 to n:\n";
    do {
        cout << i << " ";
        i++;
    } while (i <= n);
    return 0;
}