#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        const double YEN_PER_DOLLAR = 0.952;
        const double EUROS_PER_DOLLAR = 0.7175;

        double numDollars,
               numYen,
               numEuros;

        cout << "Enter the amount of U.S dollars you wish to convert: ";
        cin >> numDollars;

        numYen = numDollars * YEN_PER_DOLLAR;
        numEuros = numDollars * EUROS_PER_DOLLAR;

        cout << "\n$" << fixed << showpoint << setprecision(2) << numDollars << " USD = " << fixed << showpoint << setprecision(2) << numYen << " Yen";
        cout << "\n$" << fixed << showpoint << setprecision(2) << numDollars << " USD = " << fixed << showpoint << setprecision(2) << numEuros << " Euros";


        return 0;
}
