#include <iostream>
#include <string>
#include "TestGrader.h"
using namespace std;

void getInput(string &str);

int main()
{
        TestGrader tg;

        string key,
               studentAnswers;

        int input,
            studentCount = 0;

        cout << "\nAnswer key:" << "\n"
             << "-----------\n";
        getInput(key);
        tg.setKey(key);

        do
        {
                studentCount++;
                cout << "\nStudent Answers #" << studentCount << ":"
                     << "\n-------------------\n";
                getInput(studentAnswers);
                tg.grade(studentAnswers);

                cout << "\nEnter -1 if you'd like to quit or any other digit to continue: ";
                cin >> input;
        }
        while(input != -1);


        return 0;
}

void getInput(string &str)
{
        char input;
        str = "";
        for(int i = 0; i < 20; i++)
        {
                do
                {
                        cout << "Enter the answer for Q" << (i+1) << " (must be be A,B,C or D): ";
                        cin >> input;
                }
                while(input != 'A' && input != 'B' && input != 'C' && input != 'D');
                str += input;
        }
}
