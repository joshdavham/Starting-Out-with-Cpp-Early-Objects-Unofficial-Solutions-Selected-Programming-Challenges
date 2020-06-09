#include <iostream>
using namespace std;

int main()
{
        //Recall that Profit = Price - Cost
        double cost = 12.67;
        double price = 1.4 * cost; //The multiplier is 1.4 b/c the price must be 40% more than the cost
                                   //of the board to make a 40% Profit

        cout << "\nThe Price of the board is : $" << price << ".\n";

        return 0;
}
