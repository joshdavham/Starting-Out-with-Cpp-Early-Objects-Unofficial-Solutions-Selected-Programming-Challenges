#include "Inventory.h"
using namespace std;

Inventory::Inventory()
{
        itemNumber = 0;
        quantity = 0;
        cost = 0;
        totalCost = 0;
}

Inventory::Inventory(int i, int q, double c)
{
        setItemNumber(i);
        setQuantity(q);
        setCost(c);
        setTotalCost();
}

void Inventory::setItemNumber(int i)
{
        itemNumber = i;
}

void Inventory::setQuantity(int q)
{
        quantity = q;
}

void Inventory::setCost(double c)
{
        cost = c;
}

void Inventory::setTotalCost()
{
        totalCost = quantity * cost;
}

int Inventory::getItemNumber()
{
        return itemNumber;
}

int Inventory::getQuantity()
{
        return quantity;
}

double Inventory::getCost()
{
        return cost;
}

double Inventory::getTotalCost()
{
        setTotalCost();//We call this just in case quantity or cost were updated
        return totalCost;
}
