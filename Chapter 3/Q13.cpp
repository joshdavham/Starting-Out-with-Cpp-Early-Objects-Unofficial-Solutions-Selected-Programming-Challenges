#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
        const double STATE_TAX = 0.04;
        const double COUNTY_TAX = 0.02;
        const double TOTAL_TAX = STATE_TAX + COUNTY_TAX;

        string month,
               year;

        double cashReg,//Total amount collected at cash register
               prodSales,//Product sales
               countySalesTax,
               stateSalesTax,
               totalSalesTax;

        cout << "Enter the name of the current month: ";
        getline(cin, year);
        cout << "Enter the year: ";
        getline(cin, year);
        cout << "Enter the total amount collected at the cash register this month: ";
        cin >> cashReg;

        prodSales = cashReg / (1 + TOTAL_TAX);
        countySalesTax = prodSales * COUNTY_TAX;
        stateSalesTax = prodSales * STATE_TAX;
        totalSalesTax = countySalesTax + stateSalesTax;


        cout << "\nMonth: " << month << " " << year << "\n";
        cout << "---------------------------------\n";
        cout << "Total Collected:\t$" << right << setw(9) << fixed << showpoint << setprecision(2) << cashReg << "\n";
        cout << "Sales:\t\t\t$" << right << setw(9) << fixed << showpoint << setprecision(2) << prodSales << "\n";
        cout << "County Sales Tax:\t$" << right << setw(9) << fixed << showpoint << setprecision(2) << countySalesTax << "\n";
        cout << "State Sales Tax:\t$" << right << setw(9) << fixed << showpoint << setprecision(2) << stateSalesTax << "\n";
        cout << "Total Sales Tax:\t$" << right << setw(9) << fixed << showpoint << setprecision(2) << totalSalesTax << "\n";




        return 0;
}
