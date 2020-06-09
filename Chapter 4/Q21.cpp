#include <iostream>
#include <fstream>
using namespace std;

int main()
{
        /*This program assumes no knowledge of looping so we read the values
        from the file and then essentially rewrite the code from Q20.cpp for each value*/


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

        //Note instead of using a .dat file we will be using a .txt file called Q21.txt
        //Q2.txt will still hold the same 8 numbers as FrzBoil.dat though
        ifstream inFile;
        inFile.open("Q21.txt");
        //Now that we can test for file-open errors:
        if(inFile.fail())
        {
                cout << "\nQ21.txt could not be opened: Make sure it is located in the correct directory.\n"
                     << "\nRestart the program and try again with valid input.";
        }
        else//We proceed with the program
        {
                inFile >> temp;//Get the first temperature

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

                //Create a break between temperatures:
                cout << "\n------------------------------------------------"
                     << "\n------------------------------------------------\n\n";


                inFile >> temp;//Get the second number

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

                //Create a break between temperatures:
                cout << "\n------------------------------------------------"
                     << "\n------------------------------------------------\n\n";



                inFile >> temp;//Get the third temperature

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

                //Create a break between temperatures:
                cout << "\n------------------------------------------------"
                     << "\n------------------------------------------------\n\n";


                inFile >> temp;//Get the 4th temperature

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

                //Create a break between temperatures:
                cout << "\n------------------------------------------------"
                     << "\n------------------------------------------------\n\n";



                inFile >> temp;//Get the fifth temperature

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

                //Create a break between temperatures:
                cout << "\n------------------------------------------------"
                     << "\n------------------------------------------------\n\n";




                inFile >> temp; //Get the sixth temperature

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

                //Create a break between temperatures:
                cout << "\n------------------------------------------------"
                     << "\n------------------------------------------------\n\n";



                inFile >> temp;//Get the seventh temp

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

                //Create a break between temperatures:
                cout << "\n------------------------------------------------"
                     << "\n------------------------------------------------\n\n";



                inFile >> temp;//Get the eight temperature

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

                //Create a break between temperatures:
                cout << "\n------------------------------------------------"
                     << "\n------------------------------------------------";





        }

        cout << "\n";//Clears a line
        inFile.close();


        return 0;
}
