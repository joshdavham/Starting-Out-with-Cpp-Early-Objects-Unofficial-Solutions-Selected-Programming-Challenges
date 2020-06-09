#include <iostream>
using namespace std;

int main()
{
        double gallonsOfGas;
        double miles;
        double mpg;

        gallonsOfGas = 16;
        miles = 350;

        mpg = miles / gallonsOfGas;

        cout << "\nThe \'Miles per Gallon\' for this car is: " << mpg << " mpg.\n";

        return 0;
}
