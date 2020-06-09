#include <iostream>
#include "Date.h"
using namespace std;

Date createDate();

int main()
{
        Date date;

        date = createDate();

        cout << "\nDate format 1:";
        date.printDate1();

        cout << "\n\nDate format 2:";
        date.printDate2();

        cout << "\n\nDate format 3:";
        date.printDate3();

        cout << "\n";

        return 0;
}

Date createDate()
{
        int month,
            day,
            year;

        cout << "Enter the month number: ";
        cin >> month;
        cout << "Enter the day number: ";
        cin >> day;
        cout << "Enter the year number: ";
        cin >> year;

        Date date(month,day,year);

        return date;
}
