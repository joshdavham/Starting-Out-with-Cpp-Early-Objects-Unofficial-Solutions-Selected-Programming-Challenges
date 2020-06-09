//This program does not include error-checking
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void getInput(int responses[], int length);
void sort(int responses[], int length);
int findMode(int responses[], int length);
void disp(int responses[], int length, int mode);

int main()
{
        const int LENGTH = 30;
        int responses[LENGTH];
        int mode;

        getInput(responses,LENGTH);

        sort(responses,LENGTH);

        mode = findMode(responses,LENGTH);

        disp(responses,LENGTH,mode);

        return 0;
}

//Hard coded, instead
void getInput(int responses[], int length)
{
        unsigned seed;
        int randomNumber;

        seed = time(0);
        srand(seed);
        //These random numbers are meant to signify the amount of pieces of pie each person says they eat in a year
        //In this program nobody eats more than 10 pieces of pie
        for(int i = 0; i < length; i++)
        {
                responses[i] = rand() % 11;
        }
}

//Taken from page 593 - selection sort
void sort(int responses[], int length)
{
        int startScan, minIndex;
        int minValue;

        for(startScan = 0; startScan < (length-1); startScan++)
        {
                minIndex = startScan;
                minValue = responses[startScan];
                for(int index = startScan + 1; index < length; index++)
                {
                        if(responses[index] < minValue)
                        {
                                minValue = responses[index];
                                minIndex = index;
                        }
                }
                responses[minIndex] = responses[startScan];
                responses[startScan] = minValue;
        }
}

int findMode(int responses[], int length)
{
        //We assume responses is sorted
        //We count the longest stretch of repeating values
        int longestLength,
            currMode,
            currValue,
            currLength;

        currMode = currValue = responses[0];
        longestLength = currLength = 0;
        for(int i = 0; i < length; i++)
        {
                if(responses[i] == currValue)
                {
                        currLength++;
                }
                else
                {
                        currLength = 1;
                        currValue = responses[i];
                }

                if(currLength > longestLength)
                {
                        longestLength = currLength;
                        currMode = currValue;
                }
        }

        return currMode;

}

void disp(int responses[], int length, int mode)
{
        cout << "\nList: ";

        cout << "[" << responses[0];
        for(int i = 1; i < length; i++)
        {
                cout << ", " << responses[i];
        }
        cout << "]\n-----\n\n";

        cout << "Mode = " << mode << "\n"
             << "-----\n";
}
