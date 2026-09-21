#include <iostream>
using namespace std;
int main (){

    // When a problem says => "Return the answer modulo 10^9 + 7"
    // It is useful there because the actual answer can become enormous, far beyond the range of the int or even long-long.
    // ans % (10^9 + 7) => x % n = [0, n-1]

    // Properties
    // 1. (x + y) % m = x%m + y%m
    // 2. (x - y) % m = x%m - y%m
    // 3. (x * y) % m = x%m * y%m
    // 4. (x % m) % m) % m)......) %m) = x % m
    return 0;
}