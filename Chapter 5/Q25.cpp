#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        double balance,
               annualInterestRate,
               monthlyDeposit,
               monthlyWithdrawal,
               monthlyInterestRate,
               monthlyInterest,
               startingBalance,//The starting balance at the beginning of each month
               endingBalance,
               initBalance,//Initial balance - the balance at the beginning of the 3-month period
               totalDeposits,
               totalWithdrawals,
               totalInterest;

        cout << "Enter the starting balance of the savings account: ";
        cin >> balance;

        initBalance = balance;

        cout << "Enter the annual interest rate: ";
        cin >> annualInterestRate;

        //We initalize all the accumulator variables to 0:
        totalDeposits = 0;
        totalWithdrawals = 0;
        totalInterest = 0;

        //The loop iterates 3 times - once for each month
        for(int month = 1; month <= 3; month++)
        {
                startingBalance = balance;

                cout << "Enter the amount of money deposited in month " << month << ": ";
                cin >> monthlyDeposit;

                while(monthlyDeposit < 0)
                {
                        cout << "The amount of money deposited must be non-negative. Try again: ";
                        cin >> monthlyDeposit;
                }
                balance += monthlyDeposit;
                totalDeposits += monthlyDeposit;

                cout << "Enter the amount of money withdrawn this month: ";
                cin >> monthlyWithdrawal;

                while((monthlyWithdrawal < 0) || (monthlyWithdrawal > balance))
                {
                        cout << "The amount of money withdrawn must be non-negative and less than $"
                             << fixed << showpoint << setprecision(2) << balance << "."
                             << "\nPlease try again: ";

                        cin >> monthlyWithdrawal;
                }
                totalWithdrawals += monthlyWithdrawal;

                monthlyInterestRate = annualInterestRate / 12;

                endingBalance = startingBalance + monthlyDeposit - monthlyWithdrawal;

                monthlyInterest = monthlyInterestRate * (startingBalance + endingBalance) / 2.0;

                totalInterest += monthlyInterest;

                balance = endingBalance + monthlyInterest;//Update the balance at the end of the month


        }

        cout << "\n\nFinal Report:\n"
             << "------------\n"
             << "Starting Balance: \t$" << fixed << showpoint << setprecision(2) << initBalance << "\n"
             << "Total Deposits: \t$" << fixed << showpoint << setprecision(2) << totalDeposits << "\n"
             << "Total Withdrawals: \t$" << fixed << showpoint << setprecision(2) << totalWithdrawals << "\n"
             << "Total Interest: \t$" << fixed << showpoint << setprecision(2) << totalInterest << "\n"
             << "Final Balance: \t\t$" << fixed << showpoint << setprecision(2) << balance << "\n\n";




        return 0;
}
