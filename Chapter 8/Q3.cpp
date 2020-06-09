#include <iostream>
#include <string>
using namespace std;

void getInput(string salsaNames[], int jarsSold[], int size);
int getTotalSales(int jarsSold[], int size);
string getHighest(string salsaNames[], int jarsSold[], int size);
string getLowest(string salsaNames[], int jarsSold[], int size);
void dispReport(string salsaNames[], int jarsSold[], int size, int totalSales, string highest, string lowest);

int main()
{
        const int SIZE = 5;

        string salsaNames[SIZE] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};

        int jarsSold[SIZE];

        int totalSales;

        string highest,
               lowest;

        cout << "\n";//Clears a line
        getInput(salsaNames,jarsSold,SIZE);
        totalSales = getTotalSales(jarsSold,SIZE);
        highest = getHighest(salsaNames,jarsSold,SIZE);
        lowest = getLowest(salsaNames,jarsSold,SIZE);

        dispReport(salsaNames,jarsSold,SIZE,totalSales,highest,lowest);

        return 0;
}

void getInput(string salsaNames[], int jarsSold[], int size)
{
        int input;

        for(int i = 0; i < size; i++)
        {
                do
                {
                        cout << "Enter the amount of " << salsaNames[i] << " salsa jars sold last month (must be non-negative): ";
                        cin >> input;
                }
                while(input < 0);

                jarsSold[i] = input;
        }

}

int getTotalSales(int jarsSold[], int size)
{
        int totalSales = 0;

        for(int i = 0; i < size; i++)
        {
                totalSales += jarsSold[i];
        }

        return totalSales;
}

string getHighest(string salsaNames[], int jarsSold[], int size)
{
        int index = 0;//Hold the index of the highest selling salsa

        for(int i = 1; i < size; i++)
        {
                if(jarsSold[i] > jarsSold[index])
                {
                        index = i;
                }
        }

        return salsaNames[index];
}

string getLowest(string salsaNames[], int jarsSold[], int size)
{
        int index = 0;//Hold the index of the lowest selling salsa

        for(int i = 1; i < size; i++)
        {
                if(jarsSold[i] < jarsSold[index])
                {
                        index = i;
                }
        }

        return salsaNames[index];
}

void dispReport(string salsaNames[], int jarsSold[], int size, int totalSales, string highest, string lowest)
{
        cout << "\nSalsa Type      Sales"
             << "\n--------------------\n";

        for(int i = 0; i < size; i++)
        {
                cout << salsaNames[i] << "\t\t" << jarsSold[i] << "\n";
        }

        cout << "\nTotal Sales: " << totalSales << "\n"
             << "Highest Selling Salsa: " << highest << "\n"
             << "Lowest Selling Salsa: " << lowest << "\n";
}
