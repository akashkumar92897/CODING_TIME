#include <iostream>
using namespace std;

double myPow(double x, int n)
{

    // Basic Known Corner Cases
    if (n == 0)
        return 1.0;
    if (x == 0)
        return 0.0;
    if (x == 0)
        return 1.0;
    if (x == -1 && n % 2 == 0)
        return 1.0;
    if (x == -1 && n % 2 != 0)
        return -1.0;

    long binForm = n;
    double ans = 1;

    // Negative Power to Positive Power
    if (n < 0)
    {
        x = 1 / x;
        binForm = -binForm;
    }

    // Most Imp Logic
    while (binForm > 0)
    {
        if (binForm % 2 == 1)
        {
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }
    return ans;
}

int main()
{
    double x;
    int n;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter n: ";
    cin >> n;

    cout << "Answer: " << myPow(x, n) << endl;

    return 0;
}