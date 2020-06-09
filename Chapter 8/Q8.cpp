#include <iostream>
#include <string>
#include "Stats.h"
using namespace std;

void getData(Stats &rainStats);
void displayReport(Stats &rainStats, double total, double avg, int driest, int wettest);

const int NUM_MONTHS = 12;

int main()
{
        Stats rainStats;

        double total,
               avg;

        int driest,
            wettest;

        cout << "\n";
        getData(rainStats);

        total = rainStats.total();
        avg = rainStats.average();
        driest = rainStats.lowest();
        wettest = rainStats.highest();

        displayReport(rainStats,total,avg,driest,wettest);

        return 0;
}

void getData(Stats &rainStats)
{
        double input;
        bool flag;

        flag = true;
        for(int month = 0; month < NUM_MONTHS && flag; month++)
        {
                do
                {
                        cout << "Enter the amount(inches) of rainfall in month #" << (month+1) << " (non-negative): ";
                        cin >> input;
                }
                while(input < 0);

                flag = rainStats.storeValue(input);
        }
}

void displayReport(Stats &rainStats, double total, double avg, int driest, int wettest)
{
        string driestName,
               wettestName;

        switch(driest)
        {
                case 0: driestName = "January";
                        break;
                case 1: driestName = "February";
                        break;
                case 2: driestName = "March";
                        break;
                case 3: driestName = "April";
                        break;
                case 4: driestName = "May";
                        break;
                case 5: driestName = "June";
                        break;
                case 6: driestName = "July";
                        break;
                case 7: driestName = "August";
                        break;
                case 8: driestName = "September";
                        break;
                case 9: driestName = "October";
                        break;
                case 10: driestName = "November";
                        break;
                case 11: driestName = "December";
                        break;
                default: driestName = "";

        }

        switch(wettest)
        {
                case 0: wettestName = "January";
                        break;
                case 1: wettestName = "February";
                        break;
                case 2: wettestName = "March";
                        break;
                case 3: wettestName = "April";
                        break;
                case 4: wettestName = "May";
                        break;
                case 5: wettestName = "June";
                        break;
                case 6: wettestName = "July";
                        break;
                case 7: wettestName = "August";
                        break;
                case 8: wettestName = "September";
                        break;
                case 9: wettestName = "October";
                        break;
                case 10: wettestName = "November";
                        break;
                case 11: wettestName = "December";
                        break;
                default: wettestName = "";

        }

cout << "\n\t2017 Rain Report for Winnipeg\n\n"
     << "Total rainfall: " << total << " inches\n"
     << "Average monthly rainfall: " << avg << " inches\n"
     << "The least rain fell in " << driestName << " with " << rainStats.getValue(driest) << " inches.\n"
     << "The most rain fell in " << wettestName << " with " << rainStats.getValue(wettest) << " inches.\n";
}
