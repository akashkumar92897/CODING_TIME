#include <iostream>
using namespace std;

int sumOfDig (int num){
    int sum = 0;

    while (num > 0){
        int lastDig = num % 10;
        num /= 10;
        sum += lastDig;
    }
    return sum;
}

int main()
{
    int num = 555;
    cout << sumOfDig(num);
    return 0;
}