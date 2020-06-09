#include <iostream>
using namespace std;

int countPerfect(int tests[], int numTests);

int main()
{
        const int NUM_TESTS = 10;

        int score,//Holds the score of a test
            numPerf;//The number of perfect test scores

        //Our test array
        int tests[NUM_TESTS];

        cout << "\n";//Clear the first line
        for(int i = 0; i < NUM_TESTS; i++)
        {
                do
                {
                        cout << "Enter the score for test #" << (i+1) << " (must be between 0 and 100): ";
                        cin >> score;
                }
                while(score < 0 || score > 100);

                tests[i] = score;
        }

        numPerf = countPerfect(tests,NUM_TESTS);

        cout << "\nThere were " << numPerf << " perfect scores entered."
             << "\n-------------------------------------\n";

        return 0;
}

int countPerfect(int tests[], int numTests)
{
        int numPerf = 0;

        for(int i = 0; i < numTests; i++)
        {
                if(tests[i] == 100)
                {
                        numPerf++;
                }
        }

        return numPerf;
}
