#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}
int add(int a, int b, int c)
{
    return a + b + c;
}

int main(int argc, char const *argv[])
{
    cout << "The sum of 10 and 20 is: " << add(10, 20) << endl;
    cout << "The sum of 10, 30 and 30: " << add(10, 20, 30) << endl;
    return 0;
}
