#include <iostream>
using namespace std;

int main()
{
        double salesPercentage;
        double sales;
        double result;

        salesPercentage = 0.62;
        sales = 4.6E6;
        result = sales * salesPercentage;

        cout << "\nIf the East Coast division has $" << sales << " in sales this year"
             << "\nthen it is predicted that the company will generate $" << result
             << ".\n";

        return 0;
}
