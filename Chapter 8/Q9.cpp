#include <iostream>
#include <string>
#include "Stats.h"
using namespace std;

void getData(Stats &runStats, string runners[]);
void createReport(Stats &runStats, string runners[]);

const int NUM_RUNNERS = 5;

int main()
{
        //Used as a parallel array
        string runners[NUM_RUNNERS];

        Stats runStats;

        getData(runStats,runners);

        createReport(runStats,runners);

        return 0;
}

void getData(Stats &runStats, string runners[])
{
        double dashTime;

        cout << "\n";
        for(int i = 0; i < NUM_RUNNERS; i++)
        {
                cout << "\nEnter the name of runner #" << (i+1) << ": ";
                getline(cin,runners[i]);


                do
                {
                        cout << "Enter " << runners[i] << "\'s 100-yard dash time (must be non-negative): ";
                        cin >> dashTime;
                        cin.ignore();
                }
                while(dashTime < 0);

                runStats.storeValue(dashTime);
        }
}

void createReport(Stats &runStats, string runners[])
{
        cout << "\n\t\tManitoba Bisons Track Team\n\n"
             << "Average 100 yard-dash time: \t" << runStats.average() << " seconds\n"
             << "Slowest runner: " << runners[runStats.lowest()] << "\t\t" << runStats.getValue(runStats.lowest()) << " seconds\n"
             << "Fastest runner: " << runners[runStats.highest()] << "\t\t" << runStats.getValue(runStats.highest()) << " seconds\n";
}
