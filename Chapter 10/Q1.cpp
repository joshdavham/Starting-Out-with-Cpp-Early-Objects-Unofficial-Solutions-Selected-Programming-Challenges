#include <iostream>
using namespace std;

void getInput(double *scores, int length);
void sort(double *scores, int length);
double average(double *scores, int length);
void display(double *scores, int length, double avg);

int main()
{
        int length;
        double *scores;
        double avg;

        cout << "\n";
        do
        {
                cout << "Enter the number of test scores that will be entered (must be non-negative): ";
                cin >> length;
        }
        while(length < 0);

        scores = new double[length];

        getInput(scores,length);

        sort(scores,length);

        avg = average(scores,length);

        display(scores,length,avg);

        delete [] scores;
        scores = 0;

        return 0;
}

void getInput(double *scores, int length)
{
        double input;

        for(int i = 0; i < length; i++)
        {
                do
                {
                        cout << "Enter the score for test #" << (i+1) << " (must be non-negative): ";
                        cin >> input;
                }
                while(input < 0);

                *(scores+i) = input;
        }
}

//Taken from page 593 - selection sort
void sort(double *scores, int length)
{
        int startScan, minIndex;
        double minValue;

        for(startScan = 0; startScan < (length-1); startScan++)
        {
                minIndex = startScan;
                minValue = *(scores+startScan);
                for(int index = startScan + 1; index < length; index++)
                {
                        if(*(scores+index) < minValue)
                        {
                                minValue = *(scores+index);
                                minIndex = index;
                        }
                }
                *(scores+minIndex) = *(scores+startScan);
                *(scores+startScan) = minValue;
        }
}

double average(double *scores, int length)
{
        double total;

        total = 0;
        for(int i = 0; i < length; i++)
        {
                total += *(scores+i);
        }

        return total / length;
}

void display(double *scores, int length, double avg)
{
        cout << "\n\n";

        cout << "Scores:\n"
             << "-------\n"
             << "[" << *(scores+0);

        for(int i = 1; i < length; i++)
        {
                cout << ", " << *(scores+i);
        }
        cout << "]\n\n";

        cout << "Average of the scores: " << avg << "\n"
             << "----------------------\n";
}
