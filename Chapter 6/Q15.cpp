#include <iostream>
using namespace std;

void getInfo(int &initPop, double &birthRate, double &deathRate, int &numYears);
int getProjPoP(int prevPoP, double birthRate, double deathRate);

int main()
{
        int initPop,//Initial population
            numYears,//The number of years to display
            projPop;//Projected Population

        double birthRate,
               deathRate;

        cout << "\n";//Clear a line
        getInfo(initPop,birthRate,deathRate,numYears);

        //We display the initial population and the projected populations for each year
        cout << "\nInitial Population: " << initPop << "\n";
        projPop = initPop;//Set the projected population to the previous years population
        for(int year = 1; year <= numYears; year++)
        {
                                     //projPop is used as the previous year's population in this function
                projPop = getProjPoP(projPop,birthRate,deathRate);
                cout << "Year " << year << " Projected Population: " << projPop << "\n";
        }


        return 0;
}

void getInfo(int &initPop, double &birthRate, double &deathRate, int &numYears)
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
                cout << "Enter the number of years to be displayed (must be atleast 1): ";
                cin >> numYears;
        }
        while(numYears < 1);
}

int getProjPoP(int prevPoP, double birthRate, double deathRate)
{
        return prevPoP * (1 + birthRate) * (1 - deathRate);
}
