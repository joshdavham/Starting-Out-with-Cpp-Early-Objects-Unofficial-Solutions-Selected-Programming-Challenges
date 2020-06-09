#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        const double KPH_TO_MPH = 0.6214;//Constant that converts kph to mph

        double kph,
               mph;


        cout << "\nKPH      MPH"
             << "\n-----------------\n";

        for(int kph = 60; kph <= 130; kph += 5)
        {
                mph = kph * KPH_TO_MPH;
                cout << setw(3) << kph << setw(9) << mph << "\n";
        }


        return 0;
}
