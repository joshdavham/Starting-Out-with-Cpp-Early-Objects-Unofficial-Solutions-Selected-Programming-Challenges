#include <iostream>
using namespace std;

int main()
{
        const int NUM_ROOMS = 120,
                  SUITES_PER_FLOOR = 20;

        int floorOcc,//Number of occupied suites on the current floor
            totalOcc;//Total occupied suites

        double occRate;//The occupancy rate

        totalOcc = 0;
        for(int floorNum = 10; floorNum <= 16; floorNum++)
        {
                //SKip the nonexistant 13th floor
                if(floorNum == 13)
                {
                        continue;
                }

                cout << "\nEnter the amount of suites occupied on floor #" << floorNum << ": ";
                cin >> floorOcc;

                while( (floorOcc < 0) || (floorOcc > SUITES_PER_FLOOR) )
                {
                        cout << "\nYou must enter a number between 0 and " << SUITES_PER_FLOOR
                             << "for the number of occupied suites on the given floor."
                             << "Try again: ";
                        cin >> floorOcc;
                }

                totalOcc += floorOcc;

        }


        occRate = totalOcc * 100 / NUM_ROOMS;

        cout << "\nTotal Suites: " << NUM_ROOMS
             << "\nTotal Suites occupied: " << totalOcc
             << "\nOccupancy Rate: " << occRate << "%\n";


        return 0;
}
