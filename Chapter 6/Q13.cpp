//This was a fairly confusing Exercise so there may be mistakes contained.
#include <iostream>
#include <iomanip>
using namespace std;

void getInput(int &numSpools, int &spoolStock, double &shipAndHand);
void displayOutput(int numSpools, int spoolStock, double shipAndHand = 10.0);

int main()
{
        int numSpools,//number of spools ordered
            spoolStock;//spools in stock

        double shipAndHand;//shipping and handling charges

        cout << "\n";//Eats a line
        getInput(numSpools,spoolStock,shipAndHand);
        displayOutput(numSpools,spoolStock,shipAndHand);

        return 0;
}

void getInput(int &numSpools, int &spoolStock, double &shipAndHand)
{
        do
        {
                cout << "Enter the number of spools you'd like to order: ";
                cin >> numSpools;
        }
        while(numSpools < 1);

        do
        {
                cout << "Enter the number of spools in stock: ";
                cin >> spoolStock;
        }
        while(spoolStock < 0);

        do
        {
                cout << "Enter the shipping and handling costs: ";
                cin >> shipAndHand;
        }
        while(shipAndHand < 0);
}

void displayOutput(int numSpools, int spoolStock, double shipAndHand)
{
        int readySpools,//The number of spools ready to ship from the current stock
            backOrderSpools;//The spools placed on backorder

        double totalSellingPrice,
               totalPrice;

        if(numSpools > spoolStock)
        {
                backOrderSpools = numSpools - spoolStock;
                readySpools = spoolStock;
        }
        else
        {
                backOrderSpools = 0;
                readySpools = numSpools;
        }

        totalSellingPrice = readySpools * 100;
        totalPrice = totalSellingPrice + shipAndHand;

        //We now display the output
        cout << fixed << showpoint << setprecision(2);
        cout << "\nSpools ready to ship: " << readySpools;
        if(backOrderSpools != 0)
        {
                cout << "\nSpools on backorder: " << backOrderSpools;
        }
        cout << "\nTotal selling of price of the " << readySpools << " ready spools: $" << totalSellingPrice;
        cout << "\nTotal shipping and handling charges of the " << readySpools << " readySpools: $" << shipAndHand;
        cout << "\nTotal price of the " << readySpools << " ready spools: $" << totalPrice << "\n";

}
