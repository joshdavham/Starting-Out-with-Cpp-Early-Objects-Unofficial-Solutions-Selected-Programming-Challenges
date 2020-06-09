#include <iostream>
using namespace std;

int main()
{
        double purchasePrice;
        double stateTaxPercent;
        double countyTaxPercent;
        double totalStateTax;
        double totalCountyTax;
        double totalTax;
        double finalCost;

        purchasePrice = 52;
        stateTaxPercent = 0.04;
        countyTaxPercent = 0.02;

        totalStateTax = purchasePrice * stateTaxPercent;
        totalCountyTax = purchasePrice * countyTaxPercent;
        totalTax = totalStateTax + totalCountyTax;
        finalCost = purchasePrice + totalTax;

        cout << "\nPurchase Price: $" << purchasePrice
             << "\nState Tax: $" << totalStateTax
             << "\nCounty Tax: $" << totalCountyTax
             << "\nTotal Tax: $" << totalTax
             << "\nFinal Cost: $" << finalCost << "\n";


        return 0;
}
