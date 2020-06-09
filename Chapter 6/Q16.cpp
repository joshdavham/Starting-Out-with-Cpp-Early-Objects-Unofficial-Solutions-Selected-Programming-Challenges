#include <iostream>
using namespace std;

void getInfo(int &initPop, double &birthRate, double &deathRate, int &leave, int &enter, int &numYears);
int getProjPoP(int prevPoP, double birthRate, double deathRate, int leave, int enter);

int main()
{
        int initPop,//Initial population
            numYears,//The number of years to display
            projPop,//Projected Population
            leave,//The amount of people leaving the population each year
            enter;//The amount of people entering the population each year

        double birthRate,
               deathRate;

        cout << "\n";//Clear a line
        getInfo(initPop,birthRate,deathRate,leave,enter,numYears);

        //We display the initial population and the projected populations for each year
        cout << "\nInitial Population: " << initPop << "\n";
        projPop = initPop;//Set the projected population to the previous years population
        for(int year = 1; year <= numYears; year++)
        {
                                     //projPop is used as the previous year's population in this function
                projPop = getProjPoP(projPop,birthRate,deathRate,leave,enter);
                cout << "Year " << year << " Projected Population: " << projPop << "\n";
        }


        return 0;
}

void getInfo(int &initPop, double &birthRate, double &deathRate, int &leave, int &enter, int &numYears)
{
        do
        {
                cout << "Enter a starting popultion of atleast 2: ";
                cin >> initPop;
        }
        while(initPop < 2);

        do
        {
                cout << "Enter the birth rate (must be positive): ";
                cin >> birthRate;
        }
        while(birthRate < 0);

        do
        {
                cout << "Enter the deathRate (must be positive): ";
                cin >> deathRate;
        }
        while(deathRate < 0);

        do
        {
                cout << "Enter the amount of people that leave the population each year (can't be negative): ";
                cin >> leave;
        }
        while(leave < 0);

        do
        {
                cout << "Enter the amount of people that enter the population each year (can't be negative): ";
                cin >> enter;
        }
        while(enter < 0);

        do
        {
                cout << "Enter the number of years to be displayed (must be atleast 1): ";
                cin >> numYears;
        }
        while(numYears < 1);
}

int getProjPoP(int prevPoP, double birthRate, double deathRate, int leave, int enter)
{
        return (prevPoP * (1 + birthRate) * (1 - deathRate)) + (enter - leave);
}
