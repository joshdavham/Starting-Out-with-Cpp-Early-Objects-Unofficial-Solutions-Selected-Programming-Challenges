#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
        double angle,
               sinVal,
               cosVal,
               tanVal;

        cout << "\nEnter the an angle in radians: ";
        cin >> angle;

        sinVal = sin(angle);
        cosVal = cos(angle);
        tanVal = tan(angle);

        cout << "\nSin(" << angle << ") = " << fixed << setprecision(4) << sinVal;
        cout << "\nCos(" << angle << ") = " << fixed << setprecision(4) << cosVal;
        cout << "\nTan(" << angle << ") = " << fixed << setprecision(4) << tanVal << "\n";


        return 0;
}
