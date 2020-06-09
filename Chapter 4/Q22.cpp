#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
        //The cost of each package before being charged for using additional hours
        const double BASE_COST_A = 9.95,
                     BASE_COST_B = 14.95,
                     BASE_COST_C = 19.95;

        //The cost for each additional hour of usage
        const double RATE_A = 2.00,
                     RATE_B = 1.00,
                     RATE_C = 0;

        string name;

        char choice;

        double hours,
               baseCost,
               rate,
               addHours,//Additional hours
               totalCost;

        ofstream outputFile;

        cout << "\nEnter the customer's name: ";
        getline(cin, name);


        //Display Menu
        cout << "\nEnter the Package Used:\n"
             << "\n  Package A: For $9.95 per month 10 hours of access are provided. Additional hours"
             << "\n             are $2.00 per hour.\n"
             << "\n  Package B: For $14.95 per month 20 hours of access are provided. Additional"
             << "\n             hours are $1.00 per hour.\n"
             << "\n  Package C: For $19.95 per month unlimited access is provided.\n"
             << "\nEnter A, B or C: ";
        cin >> choice;

        cout << "\n";//Clear a line
        if( (choice == 'A' || choice == 'a') || (choice == 'B' || choice == 'b') || (choice == 'C' || choice == 'c') )
        {
                cout << "Enter the amount of hours spent using the service: ";
                cin >> hours;
                cout << "\n";//Clears a line

                //I added the extra constraint that hours must be nonegative
                if( (hours >= 0) && (hours <= 744) )
                {
                        if(choice == 'A' || choice == 'a')
                        {
                                rate = RATE_A;
                                baseCost = BASE_COST_A;

                                if(hours > 10)
                                {
                                        addHours = hours - 10;
                                }
                                else
                                {
                                        addHours = 0;
                                }
                        }
                        else if(choice == 'B' || choice == 'b')
                        {
                                rate = RATE_B;
                                baseCost = BASE_COST_B;

                                if(hours > 20)
                                {
                                        addHours = hours - 20;
                                }
                                else
                                {
                                        addHours = 0;
                                }
                        }
                        else if(choice == 'C' || choice == 'c')
                        {
                                rate = RATE_C;
                                baseCost = BASE_COST_C;

                                addHours = 0;
                        }
                        //No need for a tailing else...

                        totalCost = baseCost + (addHours * rate);

                        //Open file
                        outputFile.open("Q22.txt");

                        //Write the bill to the file
                        outputFile << "Name: " << name << "\n"
                                   << "Package Purchased: " << choice << "\n"
                                   << "Hours used: " << hours << "\n\n"
                                   << "Total Amount due:\n"
                                   << "-----------------\n"
                                   << "$" << fixed << showpoint << setprecision(2) << totalCost;

                        //Close the file
                        outputFile.close();

                        cout << "Bill written to \'Q22.txt\'.";
                }
                else
                {
                        cout << "The amount of hours entered must be between 0 and 744:"
                             << "\nRestart the program and try again with valid input.";
                }
        }
        else
        {
                cout << "You must enter A, B or C to select the package:"
                     << "\nRestart the program and try again with valid input.";
        }

        cout << "\n";//Eats the last line


        return 0;
}
