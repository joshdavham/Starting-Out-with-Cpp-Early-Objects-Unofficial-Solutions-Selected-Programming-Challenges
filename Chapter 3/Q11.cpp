#include <iostream>
using namespace std;

int main()
{
        double f_temp,
               c_temp;

        cout << "\nEnter a temperature in Celsius to be converted to Fahrenheit: ";
        cin >> c_temp;

        f_temp = (9.0 / 5.0 * c_temp) + 32.0;

        cout << "\n" << c_temp << " Celsius = " << f_temp << " Fahrenheit\n";

        return 0;
}
