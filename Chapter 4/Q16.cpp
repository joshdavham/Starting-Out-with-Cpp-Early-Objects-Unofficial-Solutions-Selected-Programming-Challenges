#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        //SOS = Speed of Sound
        const double SOS_AIR = 1100,
                     SOS_WATER = 4900,
                     SOS_STEEL = 16400;

        int choice;

        double distance,
               travelTime;//Time for sound to travel the specified distance in the given medium

        //Menu
        cout << "\nSpeed of Sound Calculator"
             << "\n-------------------------"
             << "\n   1. Calculate the amount of time needed for sound to travel a certain distance in Air "
             << "\n   2. Calculate the amount of time needed for sound to travel a certain distance in Water "
             << "\n   3. Calculate the amount of time needed for sound to travel a certain distance in Steel "
             << "\n   4. Quit"
             << "\n\nEnter your choice (1-4): ";

        cin >> choice;

        cout << "\n";//Clears a line
        if( (choice >= 1) && (choice < 4) )
        {
                cout << "Enter the distance (in ft) sound will travel: ";
                cin >> distance;

                if(distance >= 0)
                {
                        if(choice == 1)
                        {
                                travelTime = distance / SOS_AIR;
                                cout << "\nIt will take " << fixed << showpoint << setprecision(2)
                                     << travelTime << "seconds to travel " << distance << " feet in Air.";
                        }
                        else if(choice == 2)
                        {
                                travelTime = distance / SOS_WATER;
                                cout << "\nIt will take " << fixed << showpoint << setprecision(2)
                                     << travelTime << "seconds to travel " << distance << " feet in Water.";
                        }
                        else//choice == 3
                        {
                                travelTime = distance / SOS_STEEL;
                                cout << "\nIt will take " << fixed << showpoint << setprecision(2)
                                     << travelTime << "seconds to travel " << distance << " feet in Steel.";
                        }

                }
                else
                {
                        cout << "The distance travelled cannot be negative: \n"
                             << "\nRestart the program and try again with valid input.";
                }
        }
        else if(choice == 4)
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
