#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        const double RISE_RATE = 3.1;

        double totalRise;

        cout << "\nYear   Ocean Rise (in mm)"
             << "\n-------------------------\n";

        totalRise = 0;
        for(int year = 1; year <= 25; year++)
        {
                totalRise += RISE_RATE;
                cout << setw(4) << year << setw(15) << totalRise << "\n";
        }


        return 0;
}
