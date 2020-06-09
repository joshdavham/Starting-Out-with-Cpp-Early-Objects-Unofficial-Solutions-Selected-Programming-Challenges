#include <iostream>
using namespace std;

int main()
{
        const double g = 9.8; //Acceleration due to gravity near the earth's surface in metres / seconds^2

        double mass,
               weight;

        cout << "\nEnter an object's mass: ";
        cin >> mass;

        weight = mass * g;

        cout << "\nThe object's weight is " << weight << " newtons.\n";

        if(weight > 1000)
        {
                cout << "The object is too heavy.\n";
        }
        else if(weight < 10)
        {
                cout << "The object is too light.\n";
        }

        return 0;
}
