#include <iostream>
using namespace std;

const int NUM_MONKEYS = 3;
const int NUM_DAYS = 7;

void getInput(double foodLBS[][NUM_DAYS]);
double getAvg(double foodLBS[][NUM_DAYS]);
double getLeast(double foodLBS[][NUM_DAYS]);
double getGreatest(double foodLBS[][NUM_DAYS]);
void dispReport(double avgFood, double least, double greatest);

int main()
{
        double foodLBS[NUM_MONKEYS][NUM_DAYS];

        double avgFood,
               least,
               greatest;

        getInput(foodLBS);
        avgFood = getAvg(foodLBS);
        least = getLeast(foodLBS);
        greatest = getGreatest(foodLBS);

        dispReport(avgFood,least,greatest);

        return 0;
}

void getInput(double foodLBS[][NUM_DAYS])
{
        double input;

        for(int monkey = 0; monkey < NUM_MONKEYS; monkey++)
        {
                cout << "\nMonkey #" << (monkey+1)
                     << "\n---------\n";
                for(int day = 0; day < NUM_DAYS; day++)
                {
                        do
                        {
                                cout << "Enter the amount of food eaten on day #" << (day+1) << " in lbs (must be non-negative): ";
                                cin >> input;
                        }
                        while(input < 0);

                        foodLBS[monkey][day] = input;
                }
        }
}

double getAvg(double foodLBS[][NUM_DAYS])
{
        double totalFood,
               avgFood;

        totalFood = 0;
        for(int monkey = 0; monkey < NUM_MONKEYS; monkey++)
        {
                for(int day = 0; day < NUM_DAYS; day++)
                {
                        totalFood += foodLBS[monkey][day];
                }
        }

        avgFood = totalFood / (NUM_MONKEYS * NUM_DAYS);

        return avgFood;
}

//This function expects that NUM_MONKEYS >= 0
double getLeast(double foodLBS[][NUM_DAYS])
{
        double leastTotal,
               currTotal;

        //Initialize the leastTotal to be the total amount of food eaten by the first monkey
        leastTotal = 0;
        for(int day = 0; day < NUM_DAYS; day++)
        {
                leastTotal += foodLBS[0][day];
        }

        for(int monkey = 1; monkey < NUM_MONKEYS; monkey++)
        {
                currTotal = 0;
                for(int day = 0; day < NUM_DAYS; day++)
                {
                        currTotal += foodLBS[monkey][day];
                }

                if(currTotal < leastTotal)
                {
                        leastTotal = currTotal;
                }
        }

        return leastTotal;
}

//This function expects that NUM_MONKEYS >= 0
double getGreatest(double foodLBS[][NUM_DAYS])
{
        double greatestTotal,
               currTotal;

        //Initialize the greatestTotal to be the total amount of food eaten by the first monkey
        greatestTotal = 0;
        for(int day = 0; day < NUM_DAYS; day++)
        {
                greatestTotal += foodLBS[0][day];
        }

        for(int monkey = 1; monkey < NUM_MONKEYS; monkey++)
        {
                currTotal = 0;
                for(int day = 0; day < NUM_DAYS; day++)
                {
                        currTotal += foodLBS[monkey][day];
                }

                if(currTotal > greatestTotal)
                {
                        greatestTotal = currTotal;
                }
        }

        return greatestTotal;
}

void dispReport(double avgFood, double least, double greatest)
{
        cout << "\nWeekly Report:"
             << "\n--------------"
             << "\nAverage amount of food eaten per day by the monkeys: " << avgFood << " pounds"
             << "\nLeast amount of food eaten during the week by a monkey: " << least << " pounds"
             << "\nGreatest amount of food eaten during the week by a monkey: " << greatest << " pounds"
             << "\n";
}
