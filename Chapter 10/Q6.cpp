#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int *getArray(int length);
void sort(int *array, int length);
double findMedian(const int * const array, int length);
void display(const int * const array, int length, double median);

int main()
{
        int length;
        double median;
        int *array;

        do
        {
                cout << "\nHow many random numbers? (must be non-negative): ";
                cin >> length;
        }
        while(length < 0);

        array = getArray(length);

        sort(array,length);

        median = findMedian(array,length);

        display(array,length,median);

        delete [] array;
        array = 0;
        return 0;
}

//I filled up the array with random numbers since getting responses is tedious
int *getArray(int length)
{
        int *array;
        unsigned seed;

        seed = time(0);
        srand(seed);

        array = new int[length];

        for(int i = 0; i < length; i++)
        {
                *(array+i) = 1 + (rand() % 100);
        }

        return array;
}

//Taken from page 593 - selection sort
void sort(int *array, int length)
{
        int startScan, minIndex;
        int minValue;

        for(startScan = 0; startScan < (length-1); startScan++)
        {
                minIndex = startScan;
                minValue = *(array+startScan);
                for(int index = startScan + 1; index < length; index++)
                {
                        if(*(array+index) < minValue)
                        {
                                minValue = *(array+index);
                                minIndex = index;
                        }
                }
                *(array+minIndex) = *(array+startScan);
                *(array+startScan) = minValue;
        }
}

double findMedian(const int * const array, int length)
{
        if(length % 2 != 0)
        {
                return *(array + ( (length-1) / 2 ));
        }
        else//length % 2 == 0
        {
                return (*(array + ( (length-1) / 2 )) + *(array + (( (length-1) / 2 ) + 1))) / 2.0;
        }
}

void display(const int * const array, int length, double median)
{
        cout << "\nList: [" << *(array+0);
        for(int i = 1; i < length; i++)
        {
                cout << ", " << *(array+i);
        }
        cout << "]\n-----\n\n";

        cout << "Median = " << median << "\n------\n";
}
