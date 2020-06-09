#include <iostream>
#include <iomanip>
#include "Inventory.h"
using namespace std;

Inventory createInventory();
void printInventory(Inventory &inv);

int main()
{
        Inventory inv;

        inv = createInventory();

        printInventory(inv);

        return 0;
}

Inventory createInventory()
{
        int i,//item number
            q;//quantity
        double c;//cost

        cout << "\n";
        do
        {
                cout << "Enter the item number (must be non-negative): ";
                cin >> i;
        }
        while(i < 0);

        do
        {
                cout << "Enter the item's current quantity (must be non-negative): ";
                cin >> q;
        }
        while(q < 0);

        do
        {
                cout << "Enter the cost per each item (must be non-negative): ";
                cin >> c;
        }
        while(c < 0);

        Inventory inv(i,q,c);

        return inv;
}

void printInventory(Inventory &inv)
{
        cout << fixed << showpoint << setprecision(2);

        cout << "\nInventory:"
             << "\n----------\n"
             << "Item number: " << inv.getItemNumber() << "\n"
             << "Quantity: " << inv.getQuantity() << "\n"
             << "Cost: $" << inv.getCost() << "\n"
             << "Total Cost: $" << inv.getTotalCost() << "\n";
}
