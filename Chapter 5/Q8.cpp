#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        const double CALS_PER_MIN = 3.9;

        double calsBurned;

        cout << "\nMinutes   Calories Burned"
             << "\n-------------------------\n";

        for(int numMins = 15; numMins <= 30; numMins += 5)
        {
                calsBurned = numMins * CALS_PER_MIN;
                cout << setw(4) << numMins << setw(15) << calsBurned << "\n";
        }


        return 0;
}
