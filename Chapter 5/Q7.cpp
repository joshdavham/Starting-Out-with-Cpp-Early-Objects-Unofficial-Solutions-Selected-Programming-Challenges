#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        int daysWorked;

        double salary,
               totalPay;

        cout << "\nEnter the amount of days you have worked this month: ";
        cin >> daysWorked;

        while( (daysWorked < 1) || (daysWorked > 31) )
        {
                cout << "You must enter a number between 1 and 32. Please try again: ";
                cin >> daysWorked;
        }

        cout << "\nDay        Salary for Day"
             << "\n--------------------------------------\n";

        totalPay = 0;
        salary = 0.01;
        for(int day = 1; day <= daysWorked; day++)
        {
                totalPay += salary;
                cout << setw(3) << day << right << setw(13) << "$" << fixed << showpoint <<  setprecision(2) << salary << "\n";
                salary *= 2;
        }


        cout << "-------------------------------------\n"
             << "Total Monthly Salary: $" << setprecision(2) << totalPay << "\n";






        return 0;
}
