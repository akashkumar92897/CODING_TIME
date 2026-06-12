#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;

    //More optimized
    int sum = 0;
    for (int i = 1; i <= n; i += 2){
        sum += i;
    }
    
    // Alternative approach using if condition      =>      Less optimized
    //=========================================================================
    // for (int i = 1; i <= n; i++){
    //     if (i % 2 != 0){
    //         sum += i;
    //     }
    // }

    cout << "Sum of odd numbers = " << sum << endl;
    return 0;
}