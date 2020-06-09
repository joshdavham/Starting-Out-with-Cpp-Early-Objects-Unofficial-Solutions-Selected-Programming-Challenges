#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        int empNum;

        //Employee's individual variables
        double grossPay,
               stateTax,
               fedTax,
               FICAWith,//Fica withholdings
               withholdings;


        //Totals
        double totalGrossPay,
               totalStateTax,
               totalFedTax,
               totalFICAWith,
               totalNetPay;

        //Initialize the totals
        totalGrossPay = 0;
        totalStateTax = 0;
        totalFedTax = 0;
        totalFICAWith = 0;
        totalNetPay = 0;

        cout << "\nEnter the 1st employee's number: ";
        cin >> empNum;
        while(empNum != 0)
        {
                while(empNum < 0)
                {
                        cout << "Error: Please enter a non-negative employee number: ";
                        cin >> empNum;
                }


                do //We use a do-while loop since the withholdings and grossPay haven't yet been computed
                {
                        cout << "\nEnter the employee's gross-pay: ";
                        cin >> grossPay;

                        while (grossPay < 0) {
                                cout << "Error: Please enter a non-negative amount for gross-pay: ";
                                cin >> grossPay;
                        }

                        cout << "\nEnter the employee's state-tax: ";
                        cin >> stateTax;

                        while(stateTax < 0)
                        {
                                cout << "Error: Please enter a non-negative amount for state-tax: ";
                                cin >> stateTax;
                        }

                        cout << "\nEnter the employee's federal-tax: ";
                        cin >> fedTax;

                        while(fedTax < 0)
                        {
                                cout << "Error: Please enter a non-negative amount for federal-tax: ";
                                cin >> fedTax;
                        }

                        cout << "\nEnter the employee's FICA withholdings: ";
                        cin >> FICAWith;

                        while(FICAWith < 0)
                        {
                                cout << "Error: Please enter a non-negative amount for FICA withholdings: ";
                                cin >> FICAWith;
                        }

                        withholdings = stateTax + fedTax + FICAWith;

                        if(withholdings > grossPay)
                        {
                                cout << "Error: The withholdings are greater than the gross-pay\n"
                                << "You must re-enter the employee's info.\n";
                     }

                }while(withholdings > grossPay);

                //Add the employee's numbers to the totals
                totalGrossPay += grossPay;
                totalStateTax += stateTax;
                totalFedTax += fedTax;
                totalFICAWith += FICAWith;
                totalNetPay += (grossPay - withholdings);//The net pay of the individual emplyee is grossPay - withholdings... so we add this to the totalNetPay



                cout << "\nEnter the next employee's number or 0 if done: ";
                cin >> empNum;

        }

        cout << "\n\nPayroll Report\n"
             << "Total Gross-Pay: $" << fixed << showpoint << setprecision(2) << totalGrossPay << "\n"
             << "Total State-Tax: $" << fixed << showpoint << setprecision(2) << totalStateTax << "\n"
             << "Total Federal-Tax: $" << fixed << showpoint << setprecision(2) << totalFedTax << "\n"
             << "Total FICA-Withholdings: $" << fixed << showpoint << setprecision(2) << totalFICAWith << "\n"
             << "Total Net-Pay: $" << fixed << showpoint << setprecision(2) << totalNetPay << "\n\n";



        return 0;
}
