#include <iostream>
using namespace std;

int main()
{
        int month,
            day,
            year;

        cout << "\nEnter a month in numeric form: ";
        cin >> month;
        cout << "Enter a day in numeric form: ";
        cin >> day;
        cout << "Enter the last two digits of a year: ";
        cin >> year;

        if (month * day == year)
        {
                cout << "\nThe date is magic!\n";
        }
        else
        {
                cout << "\nThe date is not magic...\n";
        }

        return 0;
}
