#include <iostream>
#include <cmath>
using namespace std;

int main()
{
        //Declare constants and variables
        const double AREA_PER_SLICE = 14.125,
                     PI = 3.14;

        double diameter,
               radius,
               area;

        int numSlices;

        //Get input
        cout << "\nEnter the diameter of the pizza (in inches): ";
        cin >> diameter;

        //Calculations
        radius = diameter / 2;
        area = PI * pow(radius, 2);

        numSlices = area / AREA_PER_SLICE;

        //Output
        cout << "\nThe pizza can be divided into " << numSlices << " slices.\n";


        return 0;
}
