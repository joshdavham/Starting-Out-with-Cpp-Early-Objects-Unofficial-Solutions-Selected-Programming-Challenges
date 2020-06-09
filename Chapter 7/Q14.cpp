#include <iostream>
#include <iomanip>
#include "Tips.h"
using namespace std;

int main()
{
        double tr,//holds the tax rate
               bill,//hold the bill amount
               tipRate;

        cout << "Enter the tax rate: ";
        cin >> tr;

        Tips tips(tr);

        cout << fixed << showpoint << setprecision(2);
        while(true)
        {
                cout << "Enter the bill amount or -1 to quit: ";
                cin >> bill;
                if(bill == -1)
                        break;

                cout << "Enter the tip rate or -1 to quit: ";
                cin >> tipRate;
                if(tipRate == -1)
                        break;

                cout << "You must tip: $" << tips.computeTip(bill,tipRate) << "\n\n";

        }

        return 0;
}
