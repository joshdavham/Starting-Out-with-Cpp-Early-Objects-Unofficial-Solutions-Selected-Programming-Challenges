//I used a .txt file instead of a .dat file
//The data was taken from jsquared21's RainOrShine.dat file on GitHub
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int NUM_MONTHS = 3;
const int NUM_DAYS = 30;

void fillArray(char data[][NUM_DAYS]);
void dispReport(char data[][NUM_DAYS]);
void countDays(char data[][NUM_DAYS], int count[], int month);

int main()
{
        char data[NUM_MONTHS][NUM_DAYS];

        fillArray(data);

        dispReport(data);

        return 0;
}

void fillArray(char data[][NUM_DAYS])
{
        ifstream dataIn;
        string line;//Holds a line of input

        dataIn.open("RainOrShine.txt");
        if(!dataIn)
        {
                cout << "\nError opening file.\n";
        }
        else
        {
                for(int month = 0; month < NUM_MONTHS; month++)
                {
                        getline(dataIn,line);
                        for(int day = 0; day < NUM_DAYS; day++)
                        {
                                data[month][day] = line[day];
                        }
                }

                dataIn.close();
        }
}

void dispReport(char data[][NUM_DAYS])
{
        //This array is used to hold the number of rainy days, cloudy days, and rainy days for some month
        //The first element holds the number of rainy days, the second - cloudy days, the third - sunny days
        int count[3] = {0,0,0};

        int rDays0,//The number of rainy days, cloudy days and sunny days for month 0
            cDays0,
            sDays0;

        int rDays1,//The number of rainy days, cloudy days and sunny days for month 1
            cDays1,
            sDays1;

        int rDays2,//The number of rainy days, cloudy days and sunny days for month 2
            cDays2,
            sDays2;

        int rDaysTotal,//The number of rainy day, cloudy days and sunny days for the 3 month period
            cDaysTotal,
            sDaysTotal;

        int rainiest;//The number of times it rained in the rainiest month
        string rainiestMonth;//The name of the rainiest month

        //We get the data for month 0
        countDays(data,count,0);
        rDays0 = count[0];
        cDays0 = count[1];
        sDays0 = count[2];

        //Reset the count array
        count[0] = count[1] = count[2] = 0;

        //We get the data for month 1
        countDays(data,count,1);
        rDays1 = count[0];
        cDays1 = count[1];
        sDays1 = count[2];

        //Reset the count array
        count[0] = count[1] = count[2] = 0;

        //We get the data for month 2
        countDays(data,count,2);
        rDays2 = count[0];
        cDays2 = count[1];
        sDays2 = count[2];

        //Reset the count array
        count[0] = count[1] = count[2] = 0;

        //We calculate the totals
        rDaysTotal = rDays0 + rDays1 + rDays2;
        cDaysTotal = cDays0 + cDays1 + cDays2;
        sDaysTotal = sDays0 + sDays1 + sDays2;

        //We find the rainiest month
        //We initialize the rainiest month to be month 0
        rainiest = rDays0;
        rainiestMonth = "June";
        if(rainiest < rDays1)
        {
                rainiest = rDays1;
                rainiestMonth = "July";
        }
        if(rainiest < rDays2)
        {
                rainiest = rDays2;
                rainiestMonth = "August";
        }

        //We now display the report
        cout << "\nJune:"
             << "\n-----\n"
             << "Rainy Days: " << rDays0 << "\n"
             << "Cloudy Days: " << cDays0 << "\n"
             << "Sunny Days: " << sDays0 << "\n";

        cout << "\nJuly:"
             << "\n-----\n"
             << "Rainy Days: " << rDays1 << "\n"
             << "Cloudy Days: " << cDays1 << "\n"
             << "Sunny Days: " << sDays1 << "\n";

        cout << "\nAugust:"
             << "\n------\n"
             << "Rainy Days: " << rDays2 << "\n"
             << "Cloudy Days: " << cDays2 << "\n"
             << "Sunny Days: " << sDays2 << "\n";

        cout << "\nSummer:"
             << "\n-------\n"
             << "Rainy Days: " << rDaysTotal << "\n"
             << "Cloudy Days: " << cDaysTotal << "\n"
             << "Sunny Days: " << sDaysTotal << "\n";

        cout << "\nThe Rainiest Month was: " << rainiestMonth << "\n";
}

void countDays(char data[][NUM_DAYS], int count[], int month)
{
        for(int day = 0; day < NUM_DAYS; day++)
        {
                if(data[month][day] == 'R')
                {
                        count[0]++;
                }
                else if(data[month][day] == 'C')
                {
                        count[1]++;
                }
                else//data[month][day] == 'S'
                {
                        count[2]++;
                }
        }
}
