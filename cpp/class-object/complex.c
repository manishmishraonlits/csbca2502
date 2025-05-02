#include <stdio.h>
typedef struct complex
{
    float real;
    float imaginary;
} COMPLEX;

void read(COMPLEX *c1, COMPLEX *c2);
COMPLEX add(COMPLEX c1, COMPLEX c2);
void display(COMPLEX c3);

int main(void)
{
    COMPLEX c1, c2, c3;
    read(&c1, &c2);
    c3 = add(c1, c2);
    display(c3);
    return 0;
}

void read(COMPLEX *c1, COMPLEX *c2)
{
    printf("Enter a complex number: ");
    scanf("%f+%fi", &c1->real, &c1->imaginary);
    printf("Enter another complex number: ");
    scanf("%f+%fi", &c2->real, &c2->imaginary);    
}

COMPLEX add(COMPLEX c1, COMPLEX c2)
{
    COMPLEX c3;
    c3.real = c1.real + c2.real;
    c3.imaginary = c1.imaginary + c2.imaginary;
    return c3;
}

void display(COMPLEX c3)
{
    printf("%1.2f+%1.2fi", c3.real, c3.imaginary);
}