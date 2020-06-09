#include <iostream>
#include "Population.h"
using namespace std;

int main()
{
        //Example 1
        Population pop1(100000,8000,6000);
        cout << "\nPopulation 1:"
             << "\n-------------\n"
             << "Birth Rate: " << pop1.getBirthRate() << "\n"
             << "Death Rate: " << pop1.getDeathRate() << "\n";


        //Example2
        Population pop2;
        int input;

        cout << "\nEnter Population 2's current population: ";
        cin >> input;
        pop2.setPopulation(input);
        cout << "Enter Population 2's annual number of births: ";
        cin >> input;
        pop2.setBirths(input);
        cout << "Enter Population 2's annual number of deaths: ";
        cin >> input;
        pop2.setDeaths(input);

        cout << "\nPopulation 2:"
             << "\n-------------\n"
             << "Birth Rate: " << pop2.getBirthRate() << "\n"
             << "Death Rate: " << pop2.getDeathRate() << "\n";


        return 0;
}
