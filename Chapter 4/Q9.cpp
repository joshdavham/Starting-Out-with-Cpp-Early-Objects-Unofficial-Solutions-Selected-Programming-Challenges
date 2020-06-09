#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        const double PRICE = 99,
                     DISCOUNT_1 = 0.2,
                     DISCOUNT_2 = 0.3,
                     DISCOUNT_3 = 0.4,
                     DISCOUNT_4 = 0.5;

        int numUnits;

        double totalCost;

        cout << "\nEnter the amount of units purchased: ";
        cin >> numUnits;

        cout << "\n";//Clears a line
        if(numUnits <= 0)
        {
                cout << "You must purchase at least 1 unit: \n"
                     << "Restart the program and try again with valid input.";
        }
        else if(numUnits < 20)
        {
                //A discount of 20% is 80% of the original price
                totalCost = PRICE * (1 - DISCOUNT_1) * numUnits;
        }
        else if(numUnits < 50)
        {
                totalCost = PRICE * (1 - DISCOUNT_2) * numUnits;
        }
        else if(numUnits < 100)
        {
                totalCost = PRICE * (1 - DISCOUNT_3) * numUnits;
        }
        else//numUnits >= 100
        {
                totalCost = PRICE * (1 - DISCOUNT_4) * numUnits;
        }


        cout << "The total cost of the purchase is: $" << fixed << showpoint << setprecision(2) << totalCost;
        cout << "\n";//Clears a line


        return 0;
}
