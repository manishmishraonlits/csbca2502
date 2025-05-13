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
    }
    date(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
        cout << "Object Created" << endl;
    } // constructor

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
