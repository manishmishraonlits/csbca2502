#include <iostream>     // File Inclusion

using namespace std;

class complex
{
private:
    float real;
    float imaginary;

public:
    void init(float real, float imaginary);
    complex operator+(complex c);
    void display();
};

void complex ::init(float real, float imaginary)
{
    real = real;
    imaginary = imaginary;
}

complex complex ::operator+(complex c)
{
    complex sum;
    sum.real = real + c.real;
    sum.imaginary = imaginary + c.imaginary;
    return sum;
}

void complex ::display()
{
    cout << real << "+" << imaginary << "i";
}

int main(void)
{
    complex c1, c2, c3;
    c1.init(2.3f, 5.6f);
    c2.init(9.7f, 1.1f);
    c3 = c1 + c2;
    c3.display();
    return 0;
}