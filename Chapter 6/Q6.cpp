#include <iostream>
#include <string>
using namespace std;

int getNumAccidents(string regionName);
void findLowest(int northTotal, int southTotal, int eastTotal, int westTotal, int centralTotal);

int main()
{
        int northTotal,
            southTotal,
            eastTotal,
            westTotal,
            centralTotal;

        cout << "\n";//Eats a line
        northTotal = getNumAccidents("North");
        southTotal = getNumAccidents("South");
        eastTotal = getNumAccidents("East");
        westTotal = getNumAccidents("West");
        centralTotal = getNumAccidents("Central");

        findLowest(northTotal, southTotal, eastTotal, westTotal, centralTotal);

        return 0;
}

int getNumAccidents(string regionName)
{
        int numAccidents;

        do
        {
                cout << "Enter the number of accidents that occured last year in the " << regionName << " region: ";
                cin >> numAccidents;
        }
        while(numAccidents < 0);

        return numAccidents;
}

void findLowest(int northTotal, int southTotal, int eastTotal, int westTotal, int centralTotal)
{
        string lowestRegion;
        int lowestTotal;

        //Initialize the current lowest to the North region
        lowestRegion = "North";
        lowestTotal = northTotal;

        if(lowestTotal > southTotal)
        {
                lowestRegion = "South";
                lowestTotal = southTotal;
        }

        if(lowestTotal > eastTotal)
        {
                lowestRegion = "East";
                lowestTotal = eastTotal;
        }

        if(lowestTotal > westTotal)
        {
                lowestRegion = "West";
                lowestTotal = westTotal;
        }

        if(lowestTotal > centralTotal)
        {
                lowestRegion = "Central";
                lowestTotal = centralTotal;
        }

        cout << "\nThe region with the least amount of accidents this last year was the " << lowestRegion << " region"
             << " with " << lowestTotal << " accident(s).\n";
}
