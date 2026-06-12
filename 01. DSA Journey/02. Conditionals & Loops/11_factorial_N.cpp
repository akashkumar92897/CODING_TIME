#include <iostream>
using namespace std;
int main (){
    int N;
    cout << "Enter the N: ";
    cin >> N;
    int fact = 1;
    for (int i=1; i<=N; i++){
        fact *= i;
    }
    cout << "Factorial is: " << fact << endl;
    return 0;
}