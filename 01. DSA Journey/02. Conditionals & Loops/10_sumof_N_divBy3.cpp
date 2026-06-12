#include <iostream>
using namespace std;
int main (){
    int N;
    cout << "Enter the N: ";
    cin >> N;
    int sum = 0;
    for (int i=1; i<=N; i++){
        if (i % 3 == 0){
            sum+= i;
        }
    }
    cout << "Sum is: " << sum << endl;
    return 0;
}