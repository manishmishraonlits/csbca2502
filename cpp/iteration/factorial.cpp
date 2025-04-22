#include <iostream>
using namespace std;
int main(void)
{
    int n, f = 1;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n < 0)
    {
        cout << "Factorial for negative integers are undefined.";
        return 0;
    }
    for (int i = 1; i <= n; i++)
        f *= i;
    cout << n << "! = " << f;
    return 0;
}