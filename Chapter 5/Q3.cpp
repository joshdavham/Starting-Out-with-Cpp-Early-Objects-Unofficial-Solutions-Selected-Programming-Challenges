#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        double speed,
               hours,
               distance;


        cout << "\nWhat is the speed of the vehicle in mph? ";
        cin >> speed;

        //If the user enters an invalid number for speed
        while(speed < 0)
        {
                cout << "The speed of the vehicle cannot be negative. Try again: ";
                cin >> speed;
        }

        cout << "How many hours has it traveled? ";
        cin >> hours;

        //If the user enters an invalid number for hours
        while(hours < 1)
        {
                cout << "The vehicle must've traveled at least 1 hour. Try again: ";
                cin >> hours;
        }

        //Display output
        cout << "Hour   Distance Traveled\n"
             << "--------------------------------\n";

        for(int i = 1; i <= hours; i++)
        {
                distance = i * speed;//'i' represents the current hour
                cout << setw(4) << i << setw(14) << distance << "\n";
        }


        return 0;
}
