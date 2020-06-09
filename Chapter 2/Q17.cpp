#include <iostream>
using namespace std;

int main()
{
        //Average rise in ocean levels (in mm per year) over the past century
        double avgRise = 1.8;

        //The rise in ocean levels (in mm) over the past century -
        //(multiplied by 100 since there are 100 years in a century)
        double rise = avgRise * 100;

        //The rise in ocean levels in cm converted with 0.1 as conversion multiplier
        double riseCm = rise * 0.1;

        //The rise in ocean levels in inches converted with 0.3937 as conversion multiplier
        double riseInch = riseCm * 0.3937;

        cout << "\nThe ocean has risen " << riseCm << "cm or " << riseInch << " inches in the last century.\n";



        return 0;
}
