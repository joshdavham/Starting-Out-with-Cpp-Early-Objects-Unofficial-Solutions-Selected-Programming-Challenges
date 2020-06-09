//The code for this Programming Challenge is based on jsquared21's genius solution - https://github.com/jsquared21/StartingOutCPP/blob/master/PC_4/PC_4_20.cpp
#include <iostream>
using namespace std;

int main()
{
        //The freezing points for the substances in Fahrenheit
        const double F_ETHYL = -173,
                     F_MERCURY = -38,
                     F_OXYGEN = -362,
                     F_WATER = 32;

        //The boiling points for the substances in Fahrenheit
        const double B_ETHYL = 172,
                     B_MERCURY = 676,
                     B_OXYGEN = -306,
                     B_WATER = 212;

        double temp;

        char freezeCode,
             boilCode;

        cout << "\nEnter a temperature: ";
        cin >> temp;

        //Get the freeze code for the switch statement
        if(temp <= F_OXYGEN)
        {
                freezeCode = '1';
        }
        else if(temp <= F_ETHYL)
        {
                freezeCode = '2';
        }
        else if(temp <= F_MERCURY)
        {
                freezeCode = '3';
        }
        else if(temp <= F_WATER)
        {
                freezeCode = '4';
        }
        else
        {
                freezeCode = '5';
        }

        //Get the boil code for the other switch statement
        if(temp >= B_MERCURY)
        {
                boilCode = '1';
        }
        else if(temp >= B_WATER)
        {
                boilCode = '2';
        }
        else if(temp >= B_ETHYL)
        {
                boilCode = '3';
        }
        else if(temp >= B_OXYGEN)
        {
                boilCode = '4';
        }
        else
        {
                boilCode = '5';
        }

        cout << "\nWhen the temperature is " << temp << "F:"
             << "\n-----------------------------------------------";

        //This switch statement determines which substances will freeze at the given temperature:
        //Note that since oxygen has the lowest freezing point that if oxygen freezes then all other substances freeze.
        switch(freezeCode)
        {
                case '1': cout << "\nOxygen will freeze,";

                case '2': cout << "\nEthyl Alcohol will freeze,";

                case '3': cout << "\nMercury will freeze and";

                case '4': cout << "\nWater will freeze.";
                break;

                case '5': cout << "\nNone of the given substances will freeze...";
        }

        cout << "\n";//Clears a line

        //This switch statement determines which substances will boil at the given temperature
        switch(boilCode)
        {
                case '1': cout << "\nMercury will boil,";

                case '2': cout << "\nWater will boil,";

                case '3': cout << "\nEthyl Alcohol will boil and";

                case '4': cout << "\nOxygen will boil.";
                break;

                case '5': cout << "\nNone of the given substances will boil...";
        }

        cout << "\n";//Clears a line


        return 0;
}
