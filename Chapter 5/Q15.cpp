#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
        int initPop,//The initial population
            numDays,
            currPop;//The current population

        double growthRate;

        cout << "\nEnter the starting number of organisms (must be at least 2): ";
        cin >> initPop;

        while(initPop < 2)
        {
                cout << "\nYou must enter at least 2 for the starting number of organsims."
                     << "\nPlease try again: ";
                cin >> initPop;
        }

        cout << "\nEnter the average daily population percentage increase (in decimal format): ";
        cin >> growthRate;

        while(growthRate < 0)
        {
                cout << "\nYou must enter a positive number for the growth rate."
                     << "\nPlease try again: ";
        }

        growthRate += 1;//Get growthRate in the proper form for multiplying

        cout << "\nEnter the amount of days the population will multiply (must be at least 1): ";
        cin >> numDays;

        while(numDays < 1)
        {
                cout << "\nYou must enter at least 1 for the amount of days the population will increase."
                     << "\nPlease try again: ";
        }


        cout << "\n"
             << "  Day      Population\n"
             << "---------------------\n";


        for(int day = 0; day <= numDays; day++)
        {
                currPop = initPop * pow(growthRate,day);
                cout << setw(5) << day << setw(12) << currPop << "\n";
        }

        return 0;
}
