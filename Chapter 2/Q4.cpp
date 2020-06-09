# include <iostream>
using namespace std;

int main()
{
        double mealPrice = 44.50;
        double percentTax = 0.15;
        double percentTip = 0.15;
        double totalTax;
        double totalTip;
        double totalPrice;

        totalTax = mealPrice * percentTax;
        totalTip = mealPrice * percentTip;
        totalPrice = mealPrice + totalTax + totalTip;

        cout << "\nMeal Price: $" << mealPrice
             << "\nTax Amount: $" << totalTax
             << "\nTip Amount: $" << totalTip
             << "\nTotal Bill: $" << totalPrice << "\n";

        return 0;
}
