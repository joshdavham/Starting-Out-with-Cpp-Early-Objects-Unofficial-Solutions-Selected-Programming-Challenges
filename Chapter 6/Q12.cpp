#include <iostream>
#include <iomanip>
using namespace std;

void getNumbers(int &NS, double &SP, double &SC, double &PP, double &PC);
double profit(int NS, double SP, double SC, double PP, double PC);

int main()
{
        int NS,
            stockSales;

        double SP,
               SC,
               PP,
               PC,
               Profit,
               totalProfit;

        cout << "\nEnter the number of stock sales: ";
        cin >> stockSales;

        totalProfit = 0;
        for(int i = 1; i <= stockSales; i++)
        {
                getNumbers(NS,SP,SC,PP,PC);

                totalProfit += profit(NS,SP,SC,PP,PC);
        }

        cout << "\n";//Eats a line
        if(totalProfit < 0)
        {
                totalProfit *= -1;
                cout << "Total Losses: $" << fixed << showpoint << setprecision(2) << totalProfit;
        }
        else//totalProfit >= 0
        {
                cout << "Total Profits: $" << fixed << showpoint << setprecision(2) << totalProfit;
        }

        return 0;
}

//I did not include error checking for this function
void getNumbers(int &NS, double &SP, double &SC, double &PP, double &PC)
{
        static int stockNum = 0;
        stockNum++;

        cout << "\nStock #" << stockNum;
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

double profit(int NS, double SP, double SC, double PP, double PC)
{
        return ((NS * SP) - SC) - ((NS * PP) + PC);
}
