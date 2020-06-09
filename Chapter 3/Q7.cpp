#include <iostream>
#include <string>
using namespace std;

int main()
{
        string nameForMonth1,
               nameForMonth2,
               nameForMonth3;

        double rainForMonth1,
               rainForMonth2,
               rainForMonth3;

        double avgMonthlyRain;

        cout << "Enter the name of the first month: ";
        cin >> nameForMonth1;
        cout << "Enter the total amount of rainfall for " << nameForMonth1 << ": ";
        cin >> rainForMonth1;

        cout << "Enter the name of the second month: ";
        cin >> nameForMonth2;
        cout << "Enter the total amount of rainfall for " << nameForMonth2 << ": ";
        cin >> rainForMonth2;

        cout << "Enter the name of the third month: ";
        cin >> nameForMonth3;
        cout << "Enter the total amount of rainfall for " << nameForMonth3 << ": ";
        cin >> rainForMonth3;

        //Divide by 3 since there are a total of 3 months.
        avgMonthlyRain = (rainForMonth1 + rainForMonth2 + rainForMonth3) / 3;

        cout << "\nThe average monthly rainfall for " << nameForMonth1 << ", "
             << nameForMonth2 << ", and " << nameForMonth3 << " was " << avgMonthlyRain << " inches.\n";

        return 0;
}
