#include <iostream>
using namespace std;

int main()
{
        int numSpaces,
            numStars;

        cout << "\n";

        numSpaces = 4;
        numStars = 1;
        for(int i = 1; i <= 7; i++)
        {
                for(int j = 1; j < numSpaces; j++)
                {
                        cout << " ";
                }

                for(int j = 1; j <= numStars; j++)
                {
                        cout << "+";
                }
                cout << "\n";//Clears a line

                if(i < 4)
                {
                        numSpaces -=1;
                        numStars += 2;
                }
                else
                {
                        numSpaces++;
                        numStars -= 2;
                }



        }



        return 0;
}
