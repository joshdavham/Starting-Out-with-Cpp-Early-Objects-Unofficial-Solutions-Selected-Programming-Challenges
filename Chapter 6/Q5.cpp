#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

double getSales(string divName);
void findHighest(double northEast, double southEast, double northWest, double southWest);

int main()
{
        double northEast,
               southEast,
               northWest,
               southWest;

        northEast = getSales("Northeast");
        southEast = getSales("Southeast");
        northWest = getSales("Northwest");
        southWest = getSales("Southwest");

        findHighest(northEast, southEast, northWest, southWest);

        return 0;
}

double getSales(string divName)
{
        double qSales;

        do
        {
                cout << "Enter " << divName << "\'s quarterly sales: ";
                cin >> qSales;
        }
        while(qSales < 0);

        return qSales;
}

void findHighest(double northEast, double southEast, double northWest, double southWest)
{
        string highestDiv;
        double highestSales;

        highestDiv = "Northeast";//We initialize the highest grossing division to be the northEast.
        highestSales = northEast;


        if(highestSales < southEast)
        {
                highestDiv = "Southeast";
                highestSales = southEast;
        }

        if(highestSales < northWest)
        {
                highestDiv = "Northwest";
                highestSales = northWest;
        }

        if(highestSales < southWest)
        {
                highestDiv = "Southwest";
                highestSales = southWest;
        }

        cout << "\nThe highest grossing division was the " << highestDiv << " division, with "
             << "\n$" << fixed << showpoint<< setprecision(2) << highestSales << " in sales.\n";
}
