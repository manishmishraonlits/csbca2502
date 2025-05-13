#include <iostream>
using namespace std;
int main(void)
{
    int a = 10, b = 20;
    int &x = a, &y = b; 
    cout << "The sum is " << x + y;
    return 0;
}

//&x and &y are reference variable and they serve as alias to associated variables.