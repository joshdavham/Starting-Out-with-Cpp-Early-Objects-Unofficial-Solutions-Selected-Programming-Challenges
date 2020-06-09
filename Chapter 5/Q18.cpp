#include <iostream>
using namespace std;

int main()
{
        int choice1,
            choice2,
            width,
            length;

        cout << "\nEnter an integer between 2 and 10: ";
        cin >> choice1;

        while( (choice1 < 2) || (choice1 > 10) )
        {
                cout << "\nYou must enter an integer between 2 and 10. Try again: ";
                cin >> choice1;
        }

        cout << "\nEnter an integer between 2 and 10: ";
        cin >> choice2;

        while( (choice2 < 2) || (choice2 > 10) )
        {
                cout << "\nYou must enter an integer between 2 and 10. Try again: ";
                cin >> choice2;
        }

        if(choice1 >= choice2)
        {
                length = choice1;
                width = choice2;
        }
        else//choice1 < choice2
        {
                length = choice2;
                width = choice1;
        }

        for(int i = 1; i <= width; i++)
        {
                cout << "\n";
                for(int j = 1; j <= length; j++)
                {
                        cout << "X";
                }
        }

        cout << "\n";

        return 0;
}
