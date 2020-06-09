#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        int celsius;

        double fahrenheit;

        cout << "\nCelsius    Fahrenheit"
             << "\n----------------------------";

        for(celsius = 0; celsius <= 20; celsius++)
        {
                fahrenheit = ((9.0 / 5.0) * celsius) + 32.0;
                cout << "\n" << setw(7) << celsius << setw(14) << fahrenheit;
        }


        return 0;
}
