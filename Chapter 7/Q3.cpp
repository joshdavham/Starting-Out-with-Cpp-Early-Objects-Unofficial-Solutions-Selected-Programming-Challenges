#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct CorpData
{
        string divName;//Division Name

        double q1Sales,//First quarter sales
               q2Sales,
               q3Sales,
               q4Sales,
               annSales,//Total annual sales
               avgQSales;//Average quarterly sales

        CorpData(string dN = "", double q1 = 0, double q2 = 0, double q3 = 0, double q4 = 0)
        {
                divName = dN;
                q1Sales = q1;
                q2Sales = q2;
                q3Sales = q3;
                q4Sales = q4;
        }
};

CorpData createCorpData(string divName);

//Will calculate and store the total sales and average quarterly sales for the given division
void calcCorpData(CorpData &corp);

void displayCorpData(const CorpData &corp);

int main()
{
        CorpData corpN,
                 corpS,
                 corpE,
                 corpW;

        corpN = createCorpData("North");
        calcCorpData(corpN);
        corpS = createCorpData("South");
        calcCorpData(corpS);
        corpE = createCorpData("East");
        calcCorpData(corpE);
        corpW = createCorpData("West");
        calcCorpData(corpW);

        displayCorpData(corpN);
        displayCorpData(corpS);
        displayCorpData(corpE);
        displayCorpData(corpW);

        return 0;
}


CorpData createCorpData(string divName)
{
        double q1Sales,
               q2Sales,
               q3Sales,
               q4Sales;

        cout << "\n";//Clear a line
        cout << "Enter the " << divName << " division\'s First quarter Sales: ";
        cin >> q1Sales;
        cout << "Enter the " << divName << " division\'s Second quarter Sales: ";
        cin >> q2Sales;
        cout << "Enter the " << divName << " division\'s Third quarter Sales: ";
        cin >> q3Sales;
        cout << "Enter the " << divName << " division\'s Fourth quarter Sales: ";
        cin >> q4Sales;

        CorpData corp(divName,q1Sales,q2Sales,q3Sales,q4Sales);

        return corp;
}

void calcCorpData(CorpData &corp)
{
        corp.annSales = corp.q1Sales + corp.q2Sales + corp.q3Sales + corp.q4Sales;
        corp.avgQSales = corp.annSales / 4.0;
}

void displayCorpData(const CorpData &corp)
{
        cout << "\n";//Clears a line
        cout << fixed << showpoint << setprecision(2);
        cout << "Corporation Data:\n"
             << "-----------------\n"
             << "Division: " << corp.divName << "\n"
             << "Total Sales: $" << corp.annSales << "\n"
             << "Quarterly Average: $" << corp.avgQSales << "\n";
}
