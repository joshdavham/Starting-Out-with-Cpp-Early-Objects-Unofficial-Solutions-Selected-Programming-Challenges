#include <iostream>
using namespace std;

int main()
{
        const int TAB_LENGTH = 6;

        int numStars;

        numStars = 1;
        for(int i = 1;  i <= 7; i++)
        {
                cout << "\n";//Clears for the next line

                if(i != 4)
                {
                        for(int j = 1; j <= TAB_LENGTH; j++)
                        {
                                cout << " ";
                        }

                }
                else
                {
                        for(int j = 1; j <= TAB_LENGTH; j++)
                        {
                                cout << "+";
                        }
                }

                for(int j = 1; j <= numStars; j++)
                {
                        cout << "+";
                }

                if(i < 4)
                {
                        numStars += 2;
                }
                else
                {
                        numStars -= 2;
                }
        }

        cout << "\n";



        return 0;
}
