#include "TestGrader.h"
using namespace std;

void TestGrader::setKey(string key)
{
        //key.length() is assumed to be 20
        for(int i = 0; i < 20; i++)
        {
                answers[i] = key[i];
        }
}

void TestGrader::grade(string studentAnswers)
{
        int correct,
            incorrect;

        int incorrectAnswers[20];

        correct = 0;
        incorrect = 0;
        for(int i = 0; i < studentAnswers.length(); i++)
        {
                if(answers[i] == studentAnswers[i])
                {
                        correct++;
                }
                else
                {
                        incorrectAnswers[incorrect] = (i+1);
                        incorrect++;
                }
        }

        cout << "\n-------------------------------------\n";
        if(correct >= 15)
        {
                cout << "The student passed.";
        }
        else
        {
                cout << "The student falied.";
        }

        cout << "\n\nNumber of correctly answered questions: " << correct
             << "\nNumber of incorrectly answered questions: " << incorrect << "\n";

        cout << "\nList of incorrectly answered questions: [";
        if(incorrect >= 1)
        {
                cout << incorrectAnswers[0];
        }
        for(int i = 1; i < incorrect; i++)
        {
                cout << ", " << incorrectAnswers[i];
        }
        cout << "]\n";
        cout << "-------------------------------------\n";
}
