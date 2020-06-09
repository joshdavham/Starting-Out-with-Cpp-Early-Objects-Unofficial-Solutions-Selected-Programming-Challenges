#include <iostream>
#include "Date.h"
using namespace std;

Date::Date(int m, int d, int y)
{
        if(m < 1 || m > 12)
        {
                month = 1;//Default
        }
        else
        {
                month = m;
        }

        if(d < 1 || d > 31)
        {
                day = 1;//Default
        }
        else
        {
                day = d;
        }

        if(y < 1950 || y > 2020)
        {
                year = 2001;//Default
        }
        else
        {
                year = y;
        }
}

void Date::printDate1()
{
        cout << "\n";
        cout << month << "/" << day << "/";
        if(year >= 2000)
        {
                cout << year - 2000;
        }
        else
        {
                cout << year - 1900;
        }
}

void Date::printDate2()
{
        cout << "\n";
        if(month == 1)
        {
                cout << "January ";
        }
        else if(month == 2)
        {
                cout << "February ";
        }
        else if(month == 3)
        {
                cout << "March ";
        }
        else if(month == 4)
        {
                cout << "April ";
        }
        else if(month == 5)
        {
                cout << "May ";
        }
        else if(month == 6)
        {
                cout << "June ";
        }
        else if(month == 7)
        {
                cout << "July ";
        }
        else if(month == 8)
        {
                cout << "August ";
        }
        else if(month == 9)
        {
                cout << "September ";
        }
        else if(month == 10)
        {
                cout << "October ";
        }
        else if(month == 11)
        {
                cout << "November ";
        }
        else//month == 12
        {
                cout << "December ";
        }

        cout << day << ", " << year;
}

void Date::printDate3()
{
        cout << "\n";
        cout << day << " ";

        if(month == 1)
        {
                cout << "January ";
        }
        else if(month == 2)
        {
                cout << "February ";
        }
        else if(month == 3)
        {
                cout << "March ";
        }
        else if(month == 4)
        {
                cout << "April ";
        }
        else if(month == 5)
        {
                cout << "May ";
        }
        else if(month == 6)
        {
                cout << "June ";
        }
        else if(month == 7)
        {
                cout << "July ";
        }
        else if(month == 8)
        {
                cout << "August ";
        }
        else if(month == 9)
        {
                cout << "September ";
        }
        else if(month == 10)
        {
                cout << "October ";
        }
        else if(month == 11)
        {
                cout << "November ";
        }
        else//month == 12
        {
                cout << "December ";
        }

        cout << year;
}
