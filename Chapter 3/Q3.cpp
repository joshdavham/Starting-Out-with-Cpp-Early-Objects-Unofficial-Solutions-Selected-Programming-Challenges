#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        //Monthly costs for each housing related expense
        double housingCosts,
               phoneCosts,
               utilitiesCosts,
               cableCosts;

        double totalMonthlyCost,
               totalAnnualCost;

        cout << "\nEnter the total monthly costs of your mortgage or rent: ";
        cin >> housingCosts;

        cout << "Enter the cost of your monthly phone bill: ";
        cin >> phoneCosts;

        cout << "Enter the cost of your total monthly utilites bill: ";
        cin >> utilitiesCosts;

        cout << "Enter your monthly cable costs: ";
        cin >> cableCosts;

        totalMonthlyCost = housingCosts + phoneCosts + utilitiesCosts + cableCosts;
        totalAnnualCost = totalMonthlyCost * 12; //12 months in a year.

        cout << "\nTotal monthly cost: $" << fixed << showpoint << setprecision(2) << totalMonthlyCost;
        cout << "\nTotal annual cost: $" << fixed << showpoint << setprecision(2) << totalAnnualCost << "\n";


        return 0;
}
