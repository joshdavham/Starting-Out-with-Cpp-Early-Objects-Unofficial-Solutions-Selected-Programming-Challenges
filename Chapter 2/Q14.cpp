#include <iostream>
using namespace std;

int main()
{
        //The player's height in inches...
        int playerHeight = 73;

        //How tall the player is in feet (not accounting for inches)
        //e.g. If the player is 6'8' then (integer) dividing by 12 will output 6 (feet)
        int feet = playerHeight / 12;

        //The remaining inches in the player's height when divided by 12
        //e.g. If the player is 6'8' then finding the remander when divided by 12 will be 8 (inches)
        int inches = playerHeight % 12;

        cout << "\nThe player's height is " << feet << " feet and " << inches << " inches tall.\n";

        return 0;
}
