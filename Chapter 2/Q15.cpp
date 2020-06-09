#include <iostream>
using namespace std;

int main()
{
        int numShares = 600;
        double initStockPrice = 21.77;//Initial Stock Price
        double newStockPrice = 16.44;

        double cost = numShares * initStockPrice; //The cost of the stock purchased
        double revenue = numShares * newStockPrice; //The revenue from selling the stock

        double loss = -1 * (revenue - cost); //Multiply by -1 since loss is negative

        cout << "\nAmount paid for stock: $" << cost
             << "\nAmount received from selling the stock: $" << revenue
             << "\nLoss: $" << loss << "\n";

        return 0;
}
