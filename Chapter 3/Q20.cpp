#include <iostream>
using namespace std;

int main()
{
        //Declare constants and variables
        const double AREA_PER_SLICE = 14.125,
                     PI = 3.14;

        const int SLICES_PER_PERSON = 4; //Each person is expected to eat 4 slices

        double diameter,
               radius,
               area;

        int slicesPerPizza,
            numPeople,
            numPizzas,
            totalNumSlices;//Total number of slices needed if each person is expected to eat 4 slices

        //Get input
        cout << "\nEnter the number of people who will attend the party: ";
        cin >> numPeople;

        cout << "Enter the diameter of the pizza (in inches): ";
        cin >> diameter;

        //Calculations
        radius = diameter / 2;
        area = PI * pow(radius, 2);

        slicesPerPizza = area / AREA_PER_SLICE;

        totalNumSlices = SLICES_PER_PERSON * numPeople;

        numPizzas = totalNumSlices / slicesPerPizza;

        //Output
        cout << "\nYou will need to purchase " << numPizzas << " pizzas.\n";



        return 0;
}
