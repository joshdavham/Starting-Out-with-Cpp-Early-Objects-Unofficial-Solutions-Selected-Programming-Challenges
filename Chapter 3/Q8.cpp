#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
        const double ADULT_COST = 6.00;
        const double CHILD_COST = 3.00;
        const double PERCENT_KEPT = 0.2;//The percentage of the gross box office profit paid to the distributor

        int numAdults,
            numChildren;

        string movieName;

        double grossProfit,
               distributorPay,
               netProfit;

        cout << "Enter the name of the movie: ";
        getline(cin, movieName);

        cout << "Enter the amount of Adult Tickets sold: ";
        cin >> numAdults;

        cout << "Enter the amount of Child Tickets sold: ";
        cin >> numChildren;

        grossProfit = (ADULT_COST * numAdults) + (CHILD_COST * numChildren);

        distributorPay = grossProfit * PERCENT_KEPT;

        netProfit = grossProfit - distributorPay;

        //Not formatted entirely correctly - but close...
        cout << "\nMovie Name:\t\t\t\"" << movieName << "\"";
        cout << "\nAdult Tickets Sold:\t\t  " << numAdults;
        cout << "\nChild Tickets Sold:\t\t  " << numChildren;
        cout << "\nGross Box Office Profit:\t  $ " << fixed << showpoint << setprecision(2) << grossProfit;
        cout << "\nAmount Paid to Distributor:\t -$ " << fixed << showpoint << setprecision(2) << distributorPay;
        cout << "\nNet Box Office Profit:\t\t$" << fixed << showpoint << setprecision(2) << netProfit;

        cout << "\n";


        return 0;
}
