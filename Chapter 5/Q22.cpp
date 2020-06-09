#include <iostream>
using namespace std;

int main()
{
        const int DOLLAR_PER_STAR = 100;

        int numStars1,
            numStars2,
            numStars3;

        cout << "\nEnter today's sales for store 1: ";
        cin >> numStars1;
        while(numStars1 < 0)
        {
                cout << "\nSales must be positive. Try again: ";
                cin >> numStars1;
        }
        numStars1 /= DOLLAR_PER_STAR;

        cout << "\nEnter today's sales for store 2: ";
        cin >> numStars2;
        while(numStars2 < 0)
        {
                cout << "\nSales must be positive. Try again: ";
                cin >> numStars2;
        }
        numStars2 /= DOLLAR_PER_STAR;

        cout << "\nEnter today's sales for store 3: ";
        cin >> numStars3;
        while(numStars3 < 0)
        {
                cout << "\nSales must be positive. Try again: ";
                cin >> numStars3;
        }
        numStars3 /= DOLLAR_PER_STAR;

        cout << "\n    DAILY SALES"
             << "\n  (each * = $100)";

        cout << "\nStore 1: ";
        for(int i = 1; i <= numStars1; i++)
        {
                cout << "*";
        }

        cout << "\nStore 2: ";
        for(int i = 1; i <= numStars2; i++)
        {
                cout << "*";
        }

        cout << "\nStore 3: ";
        for(int i = 1; i <= numStars3; i++)
        {
                cout << "*";
        }

        cout << "\n";

        return 0;
}
