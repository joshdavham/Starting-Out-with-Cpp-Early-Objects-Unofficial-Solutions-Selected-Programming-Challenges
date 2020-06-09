#include <iostream>
using namespace std;

int main()
{
        int numBooks,
            numPoints;

        cout << "\nEnter the number of books purchased this month: ";
        cin >> numBooks;

        if(numBooks <= 0)
        {
                numPoints = 0;
        }
        else if(numBooks == 1)
        {
                numPoints = 5;
        }
        else if(numBooks == 2)
        {
                numPoints = 15;
        }
        else if(numBooks == 3)
        {
                numPoints = 30;
        }
        else//numBooks >= 4
        {
                numPoints = 60;
        }

        cout << "\nYou've been awarded " << numPoints << " points!\n";

        return 0;
}
