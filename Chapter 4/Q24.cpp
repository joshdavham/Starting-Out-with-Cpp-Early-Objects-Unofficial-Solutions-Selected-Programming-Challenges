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

        string name,
               month,
               savingStatement;/*A statement at the end of the bill
                               detailing how much money would've been saved
                               if the customer would've chosen a different package*/

        char choice;

        double hours,
               addHours,//Additional hours
               totalCost,
               packageCostB,//The cost if the customer instead purchased package B
               packageCostC,
               savingsB,//The savings the customer would've made if they puchased package B
               savingsC,
               monthHours;//The number of hours in a given month

        ofstream outputFile;

        cout << "\nEnter the customer's name: ";
        getline(cin, name);

        cout << "Enter the name of the month (beginning with a capital letter): ";
        //cin.ignore(1000,'\n');//Clears the buffer for getline(...)
        getline(cin, month);

        if(month == "January" || month == "March" || month == "May" || month == "July" || month == "August" || month == "October" || month == "December")
        {
                monthHours = 744;
        }
        else if(month == "April" || month == "June" || month == "September" || month == "November")
        {
                monthHours = 720;
        }
        else if(month == "February")
        {
                monthHours = 672;
        }
        else
        {
                cout << "\nYou must enter a valid month:\n"
                     << "Restart the program and try again with valid input.\n";

                return 0;/*This ends the program earlier... I was too lazy to figure out how
                           to integrate this new if-else block into the old Q23 program. :D*/
        }

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
                if( (hours >= 0) && (hours <= monthHours) )
                {
                        if(choice == 'A' || choice == 'a')
                        {

                                //Additional hours for package A
                                if(hours > 10)
                                {
                                        addHours = hours - 10;
                                }
                                else
                                {
                                        addHours = 0;
                                }

                                totalCost = BASE_COST_A + (addHours * RATE_A);

                                //Additional hours for package B
                                if(hours > 20)
                                {
                                        addHours = hours - 20;
                                }
                                else
                                {
                                        addHours = 0;
                                }

                                //Get the cost if the customer would've instead purchased package B
                                packageCostB = BASE_COST_B + (addHours * RATE_B);

                                //Find the amount of money that would be saved if switched to B
                                savingsB = totalCost - packageCostB;


                                //Get the cost if the customer would've instead purchased package C
                                packageCostC = BASE_COST_C;//Unlimited hours

                                //Find the amount of money that would be saved if switched to C
                                savingsC = totalCost - packageCostC;

                                savingStatement = "";//Initialize the statement to nothing
                                if(savingsB > 0 || savingsC > 0)
                                {
                                        savingStatement = "You could've saved:";

                                }

                                //Open file
                                outputFile.open("Q24.txt");

                                //Write the bill to the file
                                outputFile << "Name: " << name << "\n"
                                           << "Month: " << month << "\n"
                                           << "Package Purchased: " << choice << "\n"
                                           << "Hours used: " << hours << "\n\n"
                                           << "Total Amount due:\n"
                                           << "-----------------\n"
                                           << "$" << fixed << showpoint << setprecision(2) << totalCost << "\n\n"
                                           << savingStatement << "\n";

                                //We write the savings forgone by the customer for not choosing package B
                                if(savingsB > 0)
                                {
                                       outputFile << "$" << fixed << showpoint << setprecision(2) << savingsB << " if you would've chosen Package B.\n";
                                }

                                if(savingsC > 0)
                                {
                                        outputFile << "$" << fixed << showpoint << setprecision(2) << savingsC << " if you would've chosen Package C.\n";
                                }

                                //Close the file
                                outputFile.close();

                                cout << "Bill written to \'Q24.txt\'.";




                        }
                        else if(choice == 'B' || choice == 'b')
                        {

                                //Additional hours for package B
                                if(hours > 20)
                                {
                                        addHours = hours - 20;
                                }
                                else
                                {
                                        addHours = 0;
                                }

                                totalCost = BASE_COST_B + (addHours * RATE_B);


                                //Get the cost if the customer would've instead purchased package C
                                packageCostC = BASE_COST_C;//Unlimited hours

                                //Find the amount of money that would be saved if switched to C
                                savingsC = totalCost - packageCostC;

                                savingStatement = "";//Initialize the statement to nothing
                                if(savingsC > 0)
                                {
                                        savingStatement = "You could've saved:";

                                }

                                //Open file
                                outputFile.open("Q24.txt");

                                //Write the bill to the file
                                outputFile << "Name: " << name << "\n"
                                           << "Month: " << month << "\n"
                                           << "Package Purchased: " << choice << "\n"
                                           << "Hours used: " << hours << "\n\n"
                                           << "Total Amount due:\n"
                                           << "-----------------\n"
                                           << "$" << fixed << showpoint << setprecision(2) << totalCost << "\n\n"
                                           << savingStatement << "\n";


                                //We write the savings forgone by the customer for not choosing package C
                                if(savingsC > 0)
                                {
                                        outputFile << "$" << fixed << showpoint << setprecision(2) << savingsC << " if you would've chosen Package C.\n";
                                }

                                //Close the file
                                outputFile.close();

                                cout << "Bill written to \'Q24.txt\'.";
                        }
                        else if(choice == 'C' || choice == 'c')
                        {
                                totalCost = BASE_COST_C;

                                //Open file
                                outputFile.open("Q24.txt");

                                //Write the bill to the file
                                outputFile << "Name: " << name << "\n"
                                           << "Month: " << month << "\n"
                                           << "Package Purchased: " << choice << "\n"
                                           << "Hours used: " << hours << "\n\n"
                                           << "Total Amount due:\n"
                                           << "-----------------\n"
                                           << "$" << fixed << showpoint << setprecision(2) << totalCost << "\n\n";

                                //Close the file
                                outputFile.close();

                                cout << "Bill written to \'Q24.txt\'.";

                        }
                        //No need for a tailing else...

                }
                else
                {
                        cout << "The amount of hours entered must be between 0 and " << monthHours << ":"
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
