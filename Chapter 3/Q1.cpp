#include <iostream>
#include <string>
using namespace std;

int main()
{
        string name;
        double gasTankCap;//The capacity of the gas tank
        double numMiles;//The number of miles the car can travel on a full tank
        double mileage; //The car's gas mileage

        cout << "\nEnter the amount of gallons the car can hold: ";
        cin >> gasTankCap;

        cout << "Enter the maximum distance (in miles) that the car can travel on a full tank: ";
        cin >> numMiles;

        mileage = numMiles / gasTankCap;

        cout << "\nThe mileage of the car is: " << mileage << " miles per gallon.\n";



        return 0;
}
