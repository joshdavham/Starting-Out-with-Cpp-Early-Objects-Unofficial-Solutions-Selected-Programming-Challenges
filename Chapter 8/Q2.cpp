#include <iostream>
#include <string>
using namespace std;

int main()
{
        const int SIZE = 20;

        //Array of roman numerals
        string rn[] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X",
                       "XI", "XII", "XIII", "XIV", "XV", "XVI", "XVII", "XVIII", "XIX", "XX"};

        int input = 0;

        do
        {
                cout << "\nEnter a number between 1 and 20 or 0 to quit: ";
                cin >> input;

                if(input > 0 && input <= 20)
                {
                        cout << input << " = " << rn[input-1] << "\n";
                }

        }
        while(input != 0);

        return 0;
}
