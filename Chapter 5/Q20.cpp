#include <iostream>
using namespace std;

int main()
{
        int numStars;

        numStars = 1;
        for(int i = 1;  i <= 7; i++)
        {
                cout << "\n";//Clears for the next line
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
