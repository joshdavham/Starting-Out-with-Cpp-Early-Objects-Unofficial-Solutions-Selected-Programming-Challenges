#include <iostream>
using namespace std;

void getScore(int &testScore);
void calcAverage(int testScore1, int testScore2, int testScore3, int testScore4, int testScore5);
int findLowest(int testScore1, int testScore2, int testScore3, int testScore4, int testScore5);

int main()
{
        int testScore1,
            testScore2,
            testScore3,
            testScore4,
            testScore5;

        cout << "\n";//Eats a line
        getScore(testScore1);
        getScore(testScore2);
        getScore(testScore3);
        getScore(testScore4);
        getScore(testScore5);

        calcAverage(testScore1, testScore2, testScore3, testScore4, testScore5);

        return 0;
}

void getScore(int &testScore)
{
        static int testNum = 0;
        testNum++;

        do
        {
                cout << "Enter your score for test #" << testNum << ": ";
                cin >> testScore;
        }
        while(testScore < 0 || testScore > 100);
}

void calcAverage(int testScore1, int testScore2, int testScore3, int testScore4, int testScore5)
{
        double avg,
               lowestScore;

        lowestScore = findLowest(testScore1, testScore2, testScore3, testScore4, testScore5);
        avg = (testScore1 + testScore2 + testScore3 + testScore4 + testScore5 - lowestScore) / 4.0;

        cout << "\nThe average of the four best tests is: " << avg << "\n";
}

int findLowest(int testScore1, int testScore2, int testScore3, int testScore4, int testScore5)
{
        int lowestScore;

        //Initialize lowest score to testScore1
        lowestScore = testScore1;

        if (lowestScore > testScore2)
        {
                lowestScore = testScore2;
        }

        if(lowestScore > testScore3)
        {
                lowestScore = testScore3;
        }

        if(lowestScore > testScore4)
        {
                lowestScore = testScore4;
        }

        if(lowestScore > testScore5)
        {
                lowestScore = testScore5;
        }

        return lowestScore;
}
