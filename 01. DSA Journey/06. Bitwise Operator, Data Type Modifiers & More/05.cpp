#include <iostream>
using namespace std;

int revInt (int num){
    int newNum = 0;

    while (num > 0){
        int lastDig = num % 10;
        newNum = newNum * 10 + lastDig;
        num /= 10;
    }
    return newNum;
}

int main()
{
    int num = 421;
    cout << revInt(num) << endl;
    return 0;
}