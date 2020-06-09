#include "Tips.h"
#include <iostream>
using namespace std;

Tips::Tips(double tr)
{
        if(tr < 0)
        {
                taxRate = 0.065;
        }
        else
        {
                taxRate = tr;
        }
}

double Tips::computeTip(double bill, double tipRate)
{
        while(bill < 0)
        {
                cout << "The bill cannot be less than 0.\n"
                     << "Enter the bill: ";
                cin >> bill;
        }

        while(tipRate < 0)
        {
                cout << "The tip rate cannot be less than 0.\n"
                     << "Enter the tip rate: ";
                cin >> tipRate;
        }

        return (bill / (1 + taxRate)) * tipRate;
}
