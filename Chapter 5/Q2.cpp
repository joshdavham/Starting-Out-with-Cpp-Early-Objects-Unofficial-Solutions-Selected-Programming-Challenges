#include <iostream>
using namespace std;

int main()
{
        int usrChoice,//The user's choice for a positive integer.
            sum;


        do {
                cout << "\nEnter a positive integer to be summed up to: ";
                cin >> usrChoice;
        } while(usrChoice < 1);

        sum = 0;
        for(int i = 1; i <= usrChoice; i++)
        {
                sum += i;
        }
        //The sum can also be calculated as: sum = usrChoice * (usrChoice + 1) / 2

        cout << "\nThe sum of the first " << usrChoice << " integer(s) = " << sum << "\n";


        return 0;
}
