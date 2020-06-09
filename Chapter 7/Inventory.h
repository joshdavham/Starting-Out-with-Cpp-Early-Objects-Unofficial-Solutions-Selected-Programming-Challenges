#ifndef INVENTORY_H
#define INVENTORY_H
using namespace std;

class Inventory
{
        private:
                int itemNumber,
                    quantity;
                double cost,
                       totalCost;

        public:
                Inventory();
                Inventory(int i, int q, double c);
                void setItemNumber(int i);
                void setQuantity(int q);
                void setCost(double c);
                void setTotalCost();
                int getItemNumber();
                int getQuantity();
                double getCost();
                double getTotalCost();
};

#endif
