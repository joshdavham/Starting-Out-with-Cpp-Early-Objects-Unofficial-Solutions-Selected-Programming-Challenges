#include <iostream>
#include "IntRange.h"
using namespace std;

//The constructor
IntRange::IntRange(int l, int u)
{
        lower = l;
        upper = u;
}

int IntRange::getInt()
{
        cin >> input;

        while(input < lower || input > upper)
        {
                cout << "That is not a valid integer.\n";
                cout << "Enter a value from " << lower;
                cout << " to " << upper << ".\n";
                cin >> input;
        }

        return input;
}
