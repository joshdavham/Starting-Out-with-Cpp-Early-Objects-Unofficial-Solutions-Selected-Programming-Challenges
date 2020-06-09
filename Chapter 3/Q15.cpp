#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        //The percentage of the actual value of the house that the homeowner pays tax on
        const double ASSESSED_PERC = 0.6;
        const double EXEMPTION = 5000;

        double actualValue,
               assessedValue,
               taxRate,
               annPropTax,//Annual property tax
               quarterlyPayment;

        cout << "\nEnter the actual value of the property: ";
        cin >> actualValue;
        cout << "Enter the current tax rate for each $100 of assessed value: ";
        cin >> taxRate;

        assessedValue = (actualValue * ASSESSED_PERC) - EXEMPTION;

        annPropTax = assessedValue / 100 * taxRate;
        quarterlyPayment = annPropTax / 4;

        cout << "\nYou will be charged $" << fixed << showpoint << setprecision(2) << annPropTax << " in annual property tax.\n";
        cout << "Your quarterly tax bill will be: $" << fixed << showpoint << setprecision(2) << quarterlyPayment << "\n";




        return 0;
}
