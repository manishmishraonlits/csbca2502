#include <iostream> // File Inclusion

using namespace std;

class complex
{
private:
    float real;      // instance variable
    float imaginary; // instance variable

public:
    complex() {} // default constructor
    complex(float real, float imaginary);
    complex operator+(complex c);
    void display();
};

complex ::complex(float real, float imaginary)
{
    this->real = real;           // this->real refers to the instance variable
    this->imaginary = imaginary; // this->imaginary refers to the instance variable
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
    cout << real << " + " << imaginary << "i";
}

int main(void)
{
    complex c1(2.4f, 5.6f), c2(9.7f, 1.1f);
    complex c3 = c1 + c2;
    // c3 = c1.plus(c2);
    c3.display();
    return 0;
}