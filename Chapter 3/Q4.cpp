#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        const double RECOMMENDED_PERCENTAGE = 0.8;

        double replacementCost,
               recommendedInsurance;


        cout << "\nEnter the replacement cost of the structure: ";
        cin >> replacementCost;

        recommendedInsurance = replacementCost * RECOMMENDED_PERCENTAGE;

        cout << "\nThe minimum recommended amount of insurance you shoud purchase for"
             << " this structure is: $" << fixed << showpoint << setprecision(2) << recommendedInsurance << "\n";

        return 0;
}
