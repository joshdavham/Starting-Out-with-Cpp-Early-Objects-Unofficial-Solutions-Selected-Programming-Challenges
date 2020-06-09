#include <iostream>
using namespace std;

int main()
{
        double grossPay = 32500;

        //We divide the employee's grossPay into 24 since he recieves 24 total
        //pay days if paid twice a month.
        cout << "\nIf the employee is paid twice a month then he will be paid: $"
             << grossPay / 24 << " each pay-day.";

        //We divide the employee's grossPay into 26 since he would recieve 26 total
        //pay days if paid bi-weekly.
        cout << "\nIf the employee is paid bi-weekly then he will be paid: $"
             << grossPay / 26 << " each pay-day.\n";

        return 0;
}
