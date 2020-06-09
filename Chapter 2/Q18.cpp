#include <iostream>
using namespace std;

int main()
{
        //Average rise in ocean levels (in mm per year) over the past decade
        double avgRise = 3.1;

        //The expected rise in ocean levels in the next 20 years
        double rise = avgRise * 20;

        //The expected rise in ocean levels in cm converted with 0.1 as conversion multiplier
        double riseCm = rise * 0.1;

        //The expected rise in ocean levels in inches converted with 0.3937 as conversion multiplier
        double riseInch = riseCm * 0.3937;

        cout << "\nThe ocean levels are expected to rise " << riseCm << "cm or " << riseInch << " inches in the next 20 years.\n";


        return 0;
}
