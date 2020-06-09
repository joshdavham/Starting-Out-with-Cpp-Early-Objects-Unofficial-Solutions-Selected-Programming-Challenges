//Note: You may get a compiler waring saying that minValue is an uninitialized but the program will run fine none the less
#include <iostream>
#include <string>
using namespace std;

struct Student
{
        string name;
        int score;
};

void getInput(Student *scores, int length);
void sort(Student *scores, int length);
double average(Student *scores, int length);
void display(Student *scores, int length, double avg);

int main()
{
        int length;
        Student *scores;
        double avg;

        cout << "\n";
        do
        {
                cout << "Enter the number of test scores that will be entered (must be non-negative): ";
                cin >> length;
        }
        while(length < 0);

        scores = new Student[length];

        getInput(scores,length);

        sort(scores,length);

        avg = average(scores,length);

        display(scores,length,avg);

        delete [] scores;
        scores = 0;

        return 0;
}

void getInput(Student *scores, int length)
{
        string inputName;
        int inputScore;

        for(int i = 0; i < length; i++)
        {
                cout << "\nEnter the name of student #" << (i+1) << " (only first name): ";
                cin >> inputName;
                (scores+i)->name = inputName;
                do
                {
                        cout << "Enter " << inputName << "\'s test score (must be non-negative): ";
                        cin >> inputScore;
                }
                while(inputScore < 0);

                (scores+i)->score = inputScore;
        }
}

//Taken from page 593 - selection sort
void sort(Student *scores, int length)
{
        int startScan, minIndex;
        Student *minValue;

        for(startScan = 0; startScan < (length-1); startScan++)
        {
                minIndex = startScan;
                *minValue = *(scores+startScan);
                for(int index = startScan + 1; index < length; index++)
                {
                        if((scores+index)->score < minValue->score)
                        {
                                *minValue = *(scores+index);
                                minIndex = index;
                        }
                }
                *(scores+minIndex) = *(scores+startScan);
                *(scores+startScan) = * minValue;
        }
}

double average(Student *scores, int length)
{
        double total;

        total = 0;
        for(int i = 0; i < length; i++)
        {
                total += (scores+i)->score;
        }

        return total / length;
}

void display(Student *scores, int length, double avg)
{
        cout << "\n\n";

        cout << "Scores:\n"
             << "-------\n";

        for(int i = 0; i < length; i++)
        {
                cout << "Student: " << (scores+i)->name << ", Score: " << (scores+i)->score << "\n";
        }

        cout << "\nAverage of the scores: " << avg << "\n"
             << "----------------------\n";
}
