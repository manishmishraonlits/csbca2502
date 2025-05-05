#include <iostream>
using namespace std;

class date
{
private:
    int day;
    int month;
    int year;

public:
    date()
    {
        day = 0;
        month = 0;
        year = 0;
        cout << "Object Created" << endl;
    }
    date(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
        cout << "Object Created" << endl;
    }; // constructor
    ~date() {}; // destructor
    void setDate(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    } // setter
    date getDate() { return *this; }

    void displayDate()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main(void)
{
    date d1;
    int a;
    int arr[10];
    date d2(1, 1, 2000);    // create an object of date class
    d2.setDate(2, 2, 2002); // set the date to 2/2/2002
    // date d3 = d2.getDate(); // get the date from the object
    date d4 = d2;
    d1.displayDate();
    d2.displayDate();
    // d3.displayDate();
    d4.displayDate();
    return 0;
}
