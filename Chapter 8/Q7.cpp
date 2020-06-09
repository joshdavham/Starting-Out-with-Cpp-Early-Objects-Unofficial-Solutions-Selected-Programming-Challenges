#include <iostream>
#include <string>
using namespace std;

void getData(double data[]);
double totalRainfall(double data[]);
double averageRainfall(double data[]);
int driestMonth(double data[]);
int wettestMonth(double data[]);
void displayReport(double data[], double total, double avg, int driest, int wettest);

const int NUM_MONTHS = 12;

int main()
{
        double data[NUM_MONTHS];

        double total,
               avg;

        int driest,
            wettest;

        cout << "\n";//Clear a line
        getData(data);

        total = totalRainfall(data);
        avg = averageRainfall(data);
        driest = driestMonth(data);
        wettest = wettestMonth(data);

        displayReport(data,total,avg,driest,wettest);

        return 0;
}

void getData(double data[])
{
        double input;

        for(int month = 0; month < NUM_MONTHS; month++)
        {
                do
                {
                        cout << "Enter the amount(inches) of rainfall in month #" << (month+1) << " (non-negative): ";
                        cin >> input;
                }
                while(input < 0);

                data[month] = input;
        }
}

double totalRainfall(double data[])
{
        double total;

        total = 0;
        for(int month = 0; month < NUM_MONTHS; month++)
        {
                total += data[month];
        }

        return total;
}

double averageRainfall(double data[])
{
        return totalRainfall(data) / NUM_MONTHS;
}

int driestMonth(double data[])
{
        int driest = 0;

        for(int month = 1; month < NUM_MONTHS; month++)
        {
                if(data[month] < data[driest])
                {
                        driest = month;
                }
        }

        return driest;
}

int wettestMonth(double data[])
{
        int wettest = 0;

        for(int month = 1; month < NUM_MONTHS; month++)
        {
                if(data[month] > data[wettest])
                {
                        wettest = month;
                }
        }

        return wettest;
}

void displayReport(double data[], double total, double avg, int driest, int wettest)
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
             << "The least rain fell in " << driestName << " with " << data[driest] << " inches.\n"
             << "The most rain fell in " << wettestName << " with " << data[wettest] << " inches.\n";
}
