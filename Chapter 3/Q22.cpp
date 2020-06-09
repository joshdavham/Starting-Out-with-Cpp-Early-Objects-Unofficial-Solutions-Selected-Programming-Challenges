#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        //Constants and Variables
        const double COMMISION_PERCENTAGE = 0.02;//The percentage of he pays the stock broker of each transaction

        int numShares = 100;//The amount of shares in the stock

        double initSharePrice = 32.87,//Initial share price when purchase
               sharePrice = 33.92,//Price of each share when sold
               amountPaid,//The amount of money Joe paid for the stock
               initAmountCommision,//The amount of commision paid to the broker when stock purchased
               amountSold,//The amount of money Joe sold the stock for
               amountCommision,//The amount of commision paid to the broker when stock sold
               profitOrLoss;//The resulting profit of loss after selling the stock

        //Calculations
        amountPaid = numShares * initSharePrice;
        initAmountCommision = amountPaid * COMMISION_PERCENTAGE;

        amountSold = numShares * sharePrice;
        amountCommision = amountSold * COMMISION_PERCENTAGE;

        profitOrLoss = amountSold - amountPaid - initAmountCommision - amountCommision;

        //Output
        cout << "\nAmount paid for stock:\t\t$" << right << setw(10) << fixed << showpoint << setprecision(2) << amountPaid;
        cout << "\nCommision for stock purchase:\t$" << right << setw(10) << fixed << showpoint << setprecision(2) << initAmountCommision;
        cout << "\nAmount recieved for stock:\t$" << right << setw(10) << fixed << showpoint << setprecision(2) << amountSold;
        cout << "\nCommision for stock trade:\t$" << right << setw(10) << fixed << showpoint << setprecision(2) << amountCommision;
        cout << "\nTotal Profit of Loss:\t\t$" << right << setw(10) << fixed << showpoint << setprecision(2) << profitOrLoss << "\n";


        return 0;
}
