#include <iostream>
#include <string>
using namespace std;

int main()
{
        string name,
               date1,
               date2,
               date3;

        double height1,
               height2,
               height3;

        cout << "\nEnter the name of the pole vaulter: ";
        getline(cin, name);

        cout << "\nNext we will enter the 3 best vault heights (in meters and not necessarily in order) \n"
             << "this vaulter has achieved and the dates they were achieved on:";

        cout << "\n\nEnter the first of these vault heights: ";
        cin >> height1;
        cout << "Enter the date this height was achieved: ";
        cin.ignore(1000, '\n');//Clears the buffer
        getline(cin, date1);


        cout << "\nEnter the second of these vault heights: ";
        cin >> height2;
        cout << "Enter the date this height was achieved: ";
        cin.ignore(1000, '\n');//Clears the buffer
        getline(cin, date2);

        cout << "\nEnter the third of these vault heights: ";
        cin >> height3;
        cout << "Enter the date this height was achieved: ";
        cin.ignore(1000, '\n');//Clears the buffer
        getline(cin, date3);

        cout << "\n";//Clears a line
        if( ( (height1 >= 2.0) && (height1 <= 5.0) ) && ( (height2 >= 2.0) && (height2 <= 5.0) ) && ( (height3 >= 2.0) && (height3 <= 5.0) ) )
        {
                cout << name << "\'s best 3 poll vaults:"
                     << "\n-----------------------------\n";

                //Once again... there are 3! = 6 different permutations....
                if( (height1 >= height2) && (height2 >= height3) )//123
                {
                        cout << "1st: Height: " << height1 << "m Date: " << date1 << "\n"
                             << "2nd: Height: " << height2 << "m Date: " << date2 << "\n"
                             << "3rd: Height: " << height3 << "m Date: " << date3;
                }
                else if( (height1 >= height3) && (height3 >= height2) )//132
                {
                        cout << "1st: Height: " << height1 << "m Date: " << date1 << "\n"
                             << "2nd: Height: " << height3 << "m Date: " << date3 << "\n"
                             << "3rd: Height: " << height2 << "m Date: " << date2;
                }
                else if( (height2 >= height1) && (height1 >= height3) )//213
                {
                        cout << "1st: Height: " << height2 << "m Date: " << date2 << "\n"
                             << "2nd: Height: " << height1 << "m Date: " << date1 << "\n"
                             << "3rd: Height: " << height3 << "m Date: " << date3;
                }
                else if( (height2 >= height3) && (height3 >= height1) )//231
                {
                        cout << "1st: Height: " << height2 << "m Date: " << date2 << "\n"
                             << "2nd: Height: " << height3 << "m Date: " << date3 << "\n"
                             << "3rd: Height: " << height1 << "m Date: " << date1;
                }
                else if( (height3 >= height1) && (height1 >= height2) )//312
                {
                        cout << "1st: Height: " << height3 << "m Date: " << date3 << "\n"
                             << "2nd: Height: " << height1 << "m Date: " << date1 << "\n"
                             << "3rd: Height: " << height2 << "m Date: " << date2;
                }
                else if( (height3 >= height2) && (height2 >= height1) )//321
                {
                        cout << "1st: Height: " << height3 << "m Date: " << date3 << "\n"
                             << "2nd: Height: " << height2 << "m Date: " << date2 << "\n"
                             << "3rd: Height: " << height1 << "m Date: " << date1;
                }
                //No need for a tailing else...
        }
        else
        {
                cout << "All of the vault heights must be between 2.0 and 5.0 inclusive: \n"
                     << "Restart the program and try again with valid input.";
        }

        cout << "\n";

        return 0;
}
