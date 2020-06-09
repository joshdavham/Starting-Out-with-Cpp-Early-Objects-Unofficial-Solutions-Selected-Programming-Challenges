#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void fillArray(int winningDigits[], int numDigits);//Fills up the winningDigits array
void getInput(int player[], int numDigits);
void dispArray(int array[], int numDigits);
int countMatches(int winningDigits[], int player[], int numDigits);

int main()
{
        const int NUM_DIGITS = 5;

        int winningDigits[NUM_DIGITS];
        int player[NUM_DIGITS];

        int matches;

        fillArray(winningDigits, NUM_DIGITS);
        getInput(player, NUM_DIGITS);

        matches = countMatches(winningDigits,player,NUM_DIGITS);

        cout << "\nWinning Digits:\n";
        dispArray(winningDigits,NUM_DIGITS);

        cout << "\n\nPlayer:\n";
        dispArray(player,NUM_DIGITS);

        cout << "\n\nNumber of matching digits: " << matches << "\n"
             << "----------------------------\n";

        return 0;
}

void fillArray(int winningDigits[], int numDigits)
{
        unsigned seed;
        seed = time(0);
        srand(seed);

        for(int i = 0; i < numDigits; i++)
        {
                winningDigits[i] = rand() % 10;
        }
}

void getInput(int player[], int numDigits)
{
        int input;

        cout << "\n";//Clear a line
        for(int i = 0; i < numDigits; i++)
        {
                do
                {
                        cout << "Enter digit #" << (i+1) << " (must be 0-9): ";
                        cin >> input;
                }
                while(input < 0 || input > 9);

                player[i] = input;
        }
}

void dispArray(int array[], int numDigits)
{
        cout << "[";
        for(int i = 0; i < numDigits; i++)
        {
                if(i != 0)
                {
                        cout << ",";
                }
                cout << array[i];
        }
        cout << "]";
}

int countMatches(int winningDigits[], int player[], int numDigits)
{
        int matches = 0;

        for(int i = 0; i < numDigits; i++)
        {
                if(winningDigits[i] == player[i])
                {
                        matches++;
                }
        }

        return matches;
}
