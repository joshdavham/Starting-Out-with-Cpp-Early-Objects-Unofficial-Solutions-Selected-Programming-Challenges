#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
        //Declarations
        double rate,
               loanAmount,
               monthlyPayment,
               amountPaidBack,
               interestPaid;

        int numPayments;

        //Get input
        cout << "\nEnter the annual interest rate (in decimal format): ";
        cin >> rate;
        rate /= 12;

        cout << "Enter the amount of payments: ";
        cin >> numPayments;

        cout << "Enter the amount of the loan: ";
        cin >> loanAmount;

        //Calculations
        monthlyPayment = rate * pow((1 + rate), numPayments) * loanAmount / (pow((1 + rate), numPayments) - 1);

        amountPaidBack = monthlyPayment * numPayments;

        interestPaid = amountPaidBack - loanAmount;

        //Output
        cout << "\nLoan Amount:\t\t\t$" << right << setw(10) << fixed << showpoint << setprecision(2) << loanAmount;
        cout << "\nMonthly Interest Rate:\t\t" << right << setw(10) << fixed << static_cast<int>(rate * 100) << "% ";
        cout << "\nNumber of Payments:\t\t" << right << setw(11) << numPayments;
        cout << "\nMonthly Payment:\t\t$" << right << setw(10) << fixed << showpoint << setprecision(2) << monthlyPayment;
        cout << "\nAmount Paid Back:\t\t$" << right << setw(10) << fixed << showpoint << setprecision(2) << amountPaidBack;
        cout << "\nInterest Paid:\t\t\t$" << right << setw(10) << fixed << showpoint << setprecision(2) << interestPaid << "\n";



        return 0;
}
