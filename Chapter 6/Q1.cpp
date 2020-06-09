#include <iostream>
#include <iomanip>
using namespace std;

void getInput(double &wholeSaleCost, double &markUpPerc);

double calculateRetail(double wholeSaleCost, double markUpPerc);

int main()
{
        double wholeSaleCost,
               markUpPerc,
               retailPrice;

        getInput(wholeSaleCost, markUpPerc);

        retailPrice = calculateRetail(wholeSaleCost, markUpPerc);

        cout << "\nThe retail price is: $" << fixed << showpoint << setprecision(2) << retailPrice << "\n";

        return 0;
}

void getInput(double &wholeSaleCost, double &markUpPerc)
{
        do
        {
                cout << "Enter the item's wholesale cost: ";
                cin >> wholeSaleCost;
        }
        while(wholeSaleCost < 0);

        do
        {
                cout << "Enter the item's markup percentage (in decimal format): ";
                cin >> markUpPerc;
        }
        while(markUpPerc < 0);
}

double calculateRetail(double wholeSaleCost, double markUpPerc)
{
        return wholeSaleCost + (wholeSaleCost * markUpPerc);
}
