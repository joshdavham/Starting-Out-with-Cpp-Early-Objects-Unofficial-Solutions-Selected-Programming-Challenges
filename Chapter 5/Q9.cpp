#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
        const double INIT_RATE = 2500,//Initial rate
                     INCREASE = 0.04,//Yearly increase
                     YEARS = 6;//The number of years the membership rate will increase

        double currRate;//current rate

        cout << "\nYear    Club Rate"
             << "\n----------------------\n";

        //Note: year 0 means the year before the increase
        for(int year = 0; year <= YEARS; year++)
        {
                currRate = INIT_RATE * (1 + (year * INCREASE));
                cout << setw(3) << year << right << setw(8) << "$" << fixed << showpoint <<  setprecision(2) << currRate << "\n";
        }

        return 0;
}
