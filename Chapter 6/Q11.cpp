#include <iostream>
#include <iomanip>
using namespace std;

void getNumbers(int &NS, double &SP, double &SC, double &PP, double &PC);
bool runAgain();
double profit(int NS, double SP, double SC, double PP, double PC);

int main()
{
        int NS;

        double SP,
               SC,
               PP,
               PC,
               Profit;

        do
        {
                getNumbers(NS,SP,SC,PP,PC);

                Profit = profit(NS,SP,SC,PP,PC);

                cout << "\n";//Eats a line
                if(Profit < 0)
                {
                        Profit *= -1;
                        cout << "Losses: $" << fixed << showpoint << setprecision(2) << Profit;
                }
                else//Profit >= 0
                {
                        cout << "Profits: $" << fixed << showpoint << setprecision(2) << Profit;
                }
        }
        while(runAgain());

        return 0;
}

//I did not include error checking for this function
void getNumbers(int &NS, double &SP, double &SC, double &PP, double &PC)
{
        cout << "\nEnter the number of shares: ";
        cin >> NS;
        cout << "Enter the sale price per share: ";
        cin >> SP;
        cout << "Enter the sale commision paid: ";
        cin >> SC;
        cout << "Enter purhcase price per share: ";
        cin >> PP;
        cout << "Enter the purchase commision paid: ";
        cin >> PC;
}

bool runAgain()
{
        char input;

        do
        {
                cout << "\nEnter \'r\' if you'd like to run the program again, or \'q\' if you'd like to quit the program: ";
                cin >> input;
        }
        while(input != 'r' && input != 'q');

        if(input == 'r')
        {
                return true;
        }
        else
        {
                return false;
        }
}

double profit(int NS, double SP, double SC, double PP, double PC)
{
        return ((NS * SP) - SC) - ((NS * PP) + PC);
}
