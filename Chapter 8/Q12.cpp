//Instead of using a dat file I used a txt file
//The data I used was borrowed from jsquared21's payroll.dat file on github
#include <iostream>
#include <fstream>
#include <iomanip>
#include "PayRoll.h"
using namespace std;

void readData(PayRoll list[], int length);
void displayData(PayRoll list[], int length);

int main()
{
        const int EMPLOYEES = 7;
        PayRoll list[EMPLOYEES];

        readData(list,EMPLOYEES);
        displayData(list,EMPLOYEES);

        return 0;
}

void readData(PayRoll list[], int length)
{
        ifstream inFile;
        double rate,
               hours;

        inFile.open("payroll.txt");//The text file is expected to have at least 7 rows

        if(inFile)
        {
                for(int i = 0; i < length; i++)
                {
                        inFile >> rate;
                        list[i].setRate(rate);
                        inFile >> hours;
                        list[i].setHours(hours);
                }
        }
        else
        {
                cout << "\nError\n";
        }

        inFile.close();
}

void displayData(PayRoll list[], int length)
{
        cout << "\nEmployee Gross Pay:"
             << "\n-------------------";

        cout << fixed << showpoint << setprecision(2);
        for(int i = 0; i < length; i++)
        {
                cout << "\nEmployee #" << (i+1) << "\'s gross pay: $" << list[i].getPay();
        }
        cout << "\n";
}
