#include <iostream>
using namespace std;

void getData(int stats[], int numStudents);
void sort(int stats[], int numStudents);
double findAverage(int stats[], int numStudents);
double findMedian(int stats[], int numStudents);
int findMode(int stats[], int numStudents);
void display(int stats[], int numStudents, double avg, double median, int mode);

int main()
{
        int *stats;
        int numStudents,
            mode;
        double avg,
               median;

        cout << "\nEnter the number of students surveyed: ";
        cin >> numStudents;

        stats = new int[numStudents];

        getData(stats,numStudents);

        sort(stats,numStudents);

        avg = findAverage(stats,numStudents);
        median = findMedian(stats,numStudents);
        mode = findMode(stats,numStudents);

        display(stats,numStudents,avg,median,mode);

        delete [] stats;
        stats = 0;

        return 0;
}

void getData(int stats[], int numStudents)
{
        cout << "\n";
        for(int i = 0; i < numStudents; i++)
        {
                cout << "Enter the amount of movies watched by student #" << (i+1) << ": ";
                cin >> stats[i];
        }
}

//Taken from page 593 - selection sort
void sort(int stats[], int numStudents)
{
        int startScan, minIndex;
        int minValue;

        for(startScan = 0; startScan < (numStudents-1); startScan++)
        {
                minIndex = startScan;
                minValue = stats[startScan];
                for(int index = startScan + 1; index < numStudents; index++)
                {
                        if(stats[index] < minValue)
                        {
                                minValue = stats[index];
                                minIndex = index;
                        }
                }
                stats[minIndex] = stats[startScan];
                stats[startScan] = minValue;
        }
}

double findAverage(int stats[], int numStudents)
{
        double total;

        total = 0;
        for(int i = 0; i < numStudents; i++)
        {
                total += stats[i];
        }

        return total / numStudents;
}

double findMedian(int stats[], int numStudents)
{
        if(numStudents % 2 != 0)
        {
                return stats[(numStudents-1) / 2];
        }
        else//numStudents % 2 == 0
        {
                return (stats[(numStudents-1)/2] + stats[((numStudents-1)/2)+1]) / 2.0;
        }
}

int findMode(int stats[], int numStudents)
{
        //We assume stats is sorted
        //We count the longest stretch of repeating values
        int longestLength,
            currMode,
            currValue,
            currLength;

        currMode = currValue = stats[0];
        longestLength = currLength = 0;
        for(int i = 0; i < numStudents; i++)
        {
                if(stats[i] == currValue)
                {
                        currLength++;
                }
                else
                {
                        currLength = 1;
                        currValue = stats[i];
                }

                if(currLength > longestLength)
                {
                        longestLength = currLength;
                        currMode = currValue;
                }
        }

        return currMode;

}

void display(int stats[], int numStudents, double avg, double median, int mode)
{
        cout << "\n\nList of Data: [" << stats[0];
        for(int i = 1; i < numStudents; i++)
        {
                cout << ", " << stats[i];
        }
        cout << "]\n-----\n\n";

        cout << "Average = " << avg << "\n-------\n"
             << "Median = " << median << "\n------\n"
             << "Mode = " << mode << "\n----\n\n";
}
