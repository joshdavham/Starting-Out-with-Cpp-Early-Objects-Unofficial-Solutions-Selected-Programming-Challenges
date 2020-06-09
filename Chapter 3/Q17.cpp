#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
        double principal,
               interestRate,
               compoundFreq,
               interest,
               finalBalance;

        cout << "\nEnter the initial balance in your savings account: ";
        cin >> principal;
        cout << "Enter the interest rate (as a decimal): ";
        cin >> interestRate;
        cout << "Enter the ammount of times the interest is compounded per year: ";
        cin >> compoundFreq;

        finalBalance = principal * pow(1 + (interestRate / compoundFreq), compoundFreq);
        interest = finalBalance - principal;

        cout << "\nInterest Rate:\t\t" << right << setw(8) << (interestRate * 100) << "%";
        cout << "\nTimes Compounded:\t" << right << setw(8) << compoundFreq;
        cout << "\nPrincipal:\t\t$" << right << setw(8) << fixed << showpoint << setprecision(2) << principal;
        cout << "\nInterest:\t\t$" << right << setw(8) << fixed << showpoint << setprecision(2) << interest;
        cout << "\nFinal Balance:\t\t$" << right << setw(8) << fixed << showpoint << setprecision(2) << finalBalance << "\n";


        return 0;
}
