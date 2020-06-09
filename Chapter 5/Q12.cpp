#include <iostream>
using namespace std;

int main()
{
        const int SENTINEL = -99;

        int usrChoice,//The number the user entered
            big,//The current largest integer given
            small;


        cout << "\nEnter any integer or -99 to quit: ";
        cin >> usrChoice;

        //Initialize big and small...
        big = usrChoice;
        small = usrChoice;


        while(usrChoice != SENTINEL)
        {
                cout << "\nEnter any integer or -99 to quit: ";
                cin >> usrChoice;

                if(big < usrChoice)
                {
                        big = usrChoice;
                }

                if(small > usrChoice)
                {
                        small = usrChoice;
                }

        }

        cout << "\nSmallest Number: " << small;
        cout << "\nBiggest Number: " << big << "\n";




        return 0;
}
