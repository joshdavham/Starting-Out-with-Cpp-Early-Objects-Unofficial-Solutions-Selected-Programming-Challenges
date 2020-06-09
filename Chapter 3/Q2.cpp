#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        //The costs of each respective seats
        const int CLASS_A_COST = 15,
                  CLASS_B_COST = 12,
                  CLASS_C_COST = 9;

        //The number of seats purchased from each of the respective classes
        int numClassA,
            numClassB,
            numClassC;

        double revenue;

        cout << "\nEnter the amount of Class A seats purchased: ";
        cin >> numClassA;

        cout << "\nEnter the amount of Class B seats purchased: ";
        cin >> numClassB;

        cout << "\nEnter the amount of Class C seats purchased: ";
        cin >> numClassC;

        revenue = (numClassA * CLASS_A_COST) + (numClassB * CLASS_B_COST) + (numClassC * CLASS_C_COST);

        cout << "\nRevenue: $" << fixed << showpoint << setprecision(2) << revenue << "\n";

        return 0;
}
