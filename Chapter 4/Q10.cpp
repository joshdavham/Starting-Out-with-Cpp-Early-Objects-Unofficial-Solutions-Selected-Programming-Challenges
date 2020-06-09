#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        const double BASIC_FEE = 10,//The basic monthly fee owed to the bank each month before the check fees
                     CHECK_FEE_1 = 0.1,
                     CHECK_FEE_2 = 0.08,
                     CHECK_FEE_3 = 0.06,
                     CHECK_FEE_4 = 0.04;

        int numChecks;

        double checkFee,
               monthlyFee;

        cout << "\nEnter the amount of checks written last month: ";
        cin >> numChecks;

        cout << "\n";//Clears a line
        if(numChecks < 0)
        {
                cout << "You could not have written a negative amount of checks: \n"
                     << "Restart the program and try again with valid input.";
        }
        else
        {
                if(numChecks < 20)
                {
                        checkFee = CHECK_FEE_1;
                }
                else if(numChecks < 40)
                {
                        checkFee = CHECK_FEE_2;
                }
                else if(numChecks < 60)
                {
                        checkFee = CHECK_FEE_3;
                }
                else//numChecks >= 60
                {
                        checkFee = CHECK_FEE_4;
                }

                //Calculate the monthly fee with the appropriate check-fee
                monthlyFee = (checkFee * numChecks) + BASIC_FEE;

                //Display output
                cout << "Monthly Bank-Fee: $" << fixed << showpoint << setprecision(2) << monthlyFee;
        }

        cout << "\n";//Clears a line


        return 0;
}
