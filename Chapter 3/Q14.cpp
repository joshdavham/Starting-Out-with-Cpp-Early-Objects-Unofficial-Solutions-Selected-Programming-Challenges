#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        //The percentage of the actual value of the house that the homeowner pays tax on
        const double ASSESSED_PERC = 0.6;

        double actualValue,
               assessedValue,
               taxRate,
               annPropTax;//Annual property tax

        cout << "\nEnter the actual value of the property: ";
        cin >> actualValue;
        cout << "Enter the current tax rate for each $100 of assessed value: ";
        cin >> taxRate;

        assessedValue = actualValue * ASSESSED_PERC;

        annPropTax = assessedValue / 100 * taxRate;

        cout << "\nYou will be charged $" << fixed << showpoint << setprecision(2) << annPropTax << " in annual property tax.\n";



        return 0;
}
