#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        int numBats,
            numHits;

        double battingAvg;

        cout << "\nEnter the number of times you were at bat: ";
        cin >> numBats;

        cout << "Enter the amount of hits you achieved: ";
        cin >> numHits;

        //The numerator is casted to a double to prevent integer division
        battingAvg = static_cast<double>(numHits) / numBats;

        cout << "\nYour batting average is: " << fixed << showpoint << setprecision(4) << battingAvg << " hits per bat.\n";

        return 0;
}
