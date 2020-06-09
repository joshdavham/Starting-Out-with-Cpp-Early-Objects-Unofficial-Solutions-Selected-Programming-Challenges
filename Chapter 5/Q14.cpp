#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
        const double INIT_VALUE = 1000;//The initial value of the money

        const int NUM_YEARS = 10;//The number of years the effects of inflation will be measured

        double inflationRate,
               currValue;

        cout << "\nEnter the rate of inflation (in decimal format): ";
        cin >> inflationRate;

        while( (inflationRate < 0.01) || (inflationRate > 0.15) )
        {
                cout << "\nThe inflation rate must be between .01 and 0.15. Please try again: ";
                cin >> inflationRate;
        }




        cout << "Inflation Rate = " << (inflationRate*100) << "%"
             << "\nYear         Value    "
             << "\n----------------------\n";

        inflationRate += 1;
        for(int year = 0; year <= NUM_YEARS; year++)
        {
                currValue = INIT_VALUE / pow(inflationRate, year);
                cout << setw(4) << year << setw(10) << "$" << fixed << showpoint <<  setprecision(2) << currValue << "\n";
        }


        return 0;
}
