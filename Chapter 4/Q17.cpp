#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        //SOS = Speed of Sound in meters / sec
        const double SOS_C02 = 258.0,
                     SOS_AIR = 331.5,
                     SOS_HELIUM = 972.0,
                     SOS_HYDROGEN = 1270.0;

        int choice;

        double distance,
               travelTime;//Time for sound to travel the specified distance in the given medium

        //Menu
        cout << "\nSpeed of Sound in Gases Calculator"
             << "\n----------------------------------\n"
             << "\nThis Calculator will calculate the distance travelled by sound through a gas of"
             << "\nyour choice (at 0 celsius) and over a specified period of time (between 0 and 30 seconds).\n"
             << "\nYour choices for gases are:"
             << "\n---------------------------"
             << "\n   1. Carbon dioxide"
             << "\n   2. Air"
             << "\n   3. Helium"
             << "\n   4. Hydrogen"
             << "\n   5. Quit"
             << "\n\nEnter your choice (1-5): ";

        cin >> choice;

        cout << "\n";//Clears a line
        if( (choice >= 1) && (choice < 5) )
        {
                cout << "Enter the amount of time (in seconds) sound travelled: ";
                cin >> travelTime;

                if( (travelTime >= 0) && (travelTime <= 30) )
                {
                        if(choice == 1)
                        {
                                distance = travelTime * SOS_C02;
                        }
                        else if(choice == 2)
                        {
                                distance = travelTime * SOS_AIR;
                        }
                        else if(choice == 3)
                        {
                                distance = travelTime * SOS_HELIUM;
                        }
                        else //choice == 4
                        {
                                distance = travelTime * SOS_HYDROGEN;
                        }

                        //Display output
                        cout << "\nThe source of sound came from a distance of " << fixed
                             << showpoint << setprecision(2) << distance << " meters away.";

                }
                else
                {
                        cout << "\nThe time travelled must be between 0 and 30 seconds: \n"
                             << "\nRestart the program and try again with valid input.";
                }
        }
        else if(choice == 5)
        {
                cout << "Program ended successfully.";
        }
        else
        {
                cout << "You must enter an integer between 1 and 4: \n"
                     << "\nRestart the program and try again with valid input.";
        }
        cout << "\n";//Clears a line



        return 0;
}
