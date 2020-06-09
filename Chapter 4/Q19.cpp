#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        const double RATE_1 = .12,
                     RATE_2 = .55,
                     RATE_3 = .35;

        float startTime,
              last2Digits;//Used in input validation

        double numMinutes,
               rate,
               charges;

        cout << "\nEnter the starting time of the call in the form HH.MM"
             << "\nie) 16:28 hours would be entered as 16.28 and 7:00 hours would be 07.00."
             << "\n: ";
        cin >> startTime;

        cout << "Enter the amount of minutes of the call: ";
        cin >> numMinutes;

        last2Digits = startTime - static_cast<int>(startTime);//Gets last 2 digits of the start time
        
        cout << "\n";//Clears a line
        if( (last2Digits <= .59) && (startTime <= 23.59) )
        {
                if(startTime < 7.00)
                {
                        rate = RATE_1;
                }
                else if(startTime <= 19.00)
                {
                        rate = RATE_2;
                }
                else//startTime <= 23.59
                {
                        rate = RATE_3;
                }

                charges = rate * numMinutes;

                cout << "The charge for the long-distance call is $" << fixed << showpoint << setprecision(2) << charges;

        }
        else
        {
                cout << "Error - you cannot enter start times that have last two digits greater than 59 "
                     << "\nor start times greater than 23.59:\n"
                     << "\nRestart the program and try again with valid input.";
        }

        cout << "\n";//Clears a line

        return 0;
}
