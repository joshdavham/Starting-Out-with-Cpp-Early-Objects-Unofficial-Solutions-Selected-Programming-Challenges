#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void getNumbers(double &F, double &r, int &n);
double presentValue(double F, double r, int n);
bool runAgain();//Gets input from the user telling us whether or not the user wants to run the program again.

int main()
{
        double F,
               r,
               P;

        int n;

        do
        {
        getNumbers(F,r,n);

        P = presentValue(F,r,n);

        cout << fixed << showpoint << setprecision(2);
        cout << "\nTo save up $" << F << " in " << n << " years, you must deposit $" << P << " today.\n";
        }
        while(runAgain());

        return 0;
}

//There is no error-checking in this function
void getNumbers(double &F, double &r, int &n)
{
        cout << "\nEnter the future value you'd like in the account: ";
        cin >> F;
        cout << "Enter the annual interest rate (in decimal): ";
        cin >> r;
        cout << "Enter the number of years you'll save the money: ";
        cin >> n;
}

double presentValue(double F, double r, int n)
{
        return F / pow((1+r), n);
}

bool runAgain()
{
        char input;

        do
        {
                cout << "\nEnter \'r\' if you'd like to run the program again, or \'q\' if you'd like to quit the program: ";
                cin >> input;
        }
        while(input != 'r' && input != 'q');

        if(input == 'r')
        {
                return true;
        }
        else
        {
                return false;
        }
}
