#include <iostream>
using namespace std;

int main()
{
        const int SECONDS_IN_DAY = 86400,
                  SECONDS_IN_HOUR = 3600,
                  SECONDS_IN_MINUTE = 60;


        double seconds,
               days,
               hours,
               minutes;

        cout << "\nEnter a number of seconds: ";
        cin >> seconds;

        cout << "\n";//Clears a line
        if(seconds >= SECONDS_IN_DAY)
        {
                days = seconds / SECONDS_IN_DAY;
                cout << "There are " << days << " days in " << seconds << " seconds.";
        }
        else if(seconds >= SECONDS_IN_HOUR)
        {
                hours = seconds / SECONDS_IN_HOUR;
                cout << "There are " << hours << " hours in " << seconds << " seconds.";
        }
        else if(seconds >= SECONDS_IN_MINUTE)
        {
                minutes = seconds / SECONDS_IN_MINUTE;
                cout << "There are " << minutes << " minutes in " << seconds << " seconds.";
        }


        cout << "\n";

        return 0;
}
