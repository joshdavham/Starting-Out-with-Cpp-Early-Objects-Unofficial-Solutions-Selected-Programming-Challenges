#include <iostream>
using namespace std;

void getJudgeData(double &score);
double calcScore(double score1, double score2, double score3, double score4, double score5);
int findLowest(double score1, double score2, double score3, double score4, double score5);
int findHighest(double score1, double score2, double score3, double score4, double score5);

int main()
{
        double score1,
               score2,
               score3,
               score4,
               score5,
               finalScore;

        cout << "\n";//Eats a line
        getJudgeData(score1);
        getJudgeData(score2);
        getJudgeData(score3);
        getJudgeData(score4);
        getJudgeData(score5);

        finalScore = calcScore(score1, score2, score3, score4, score5);

        cout << "\nThe performer's final score is: " << finalScore << "\n";

        return 0;
}

void getJudgeData(double &score)
{
        static int judgeNum = 0;
        judgeNum++;

        do
        {
                cout << "Enter Juge #" << judgeNum << "\'s score: ";
                cin >> score;
        }
        while(score < 0 || score > 10);
}

double calcScore(double score1, double score2, double score3, double score4, double score5)
{
        int lowestScoreNum,
            highestScoreNum;

        double lowestScore,
               highestScore;

        lowestScoreNum = findLowest(score1, score2, score3, score4, score5);
        highestScoreNum = findHighest(score1, score2, score3, score4, score5);

        //Find the lowest score
        if(lowestScoreNum == 1)
        {
                lowestScore = score1;
        }
        else if(lowestScoreNum == 2)
        {
                lowestScore = score2;
        }
        else if(lowestScoreNum == 3)
        {
                lowestScore = score3;
        }
        else if(lowestScoreNum == 4)
        {
                lowestScore = score4;
        }
        else//lowestScoreNum == 5
        {
                lowestScore = score5;
        }

        //Find the highest score
        if(highestScoreNum == 1)
        {
                highestScore = score1;
        }
        else if(highestScoreNum == 2)
        {
                highestScore = score2;
        }
        else if(highestScoreNum == 3)
        {
                highestScore = score3;
        }
        else if(highestScoreNum == 4)
        {
                highestScore = score4;
        }
        else//highestScoreNum == 5
        {
                highestScore = score5;
        }


        return (score1 + score2 + score3 + score4 + score5 - lowestScore - highestScore) / 3.0;
}

int findLowest(double score1, double score2, double score3, double score4, double score5)
{
        int scoreNum;
        double lowestScore;

        //We Initialize the lowest score to be the 1st score
        scoreNum = 1;
        lowestScore = score1;

        if(lowestScore > score2)
        {
                scoreNum = 2;
                lowestScore = score2;
        }

        if(lowestScore > score3)
        {
                scoreNum = 3;
                lowestScore = score3;
        }

        if(lowestScore > score4)
        {
                scoreNum = 4;
                lowestScore = score4;
        }

        if(lowestScore > score5)
        {
                scoreNum = 5;
                lowestScore = score5;
        }

        return scoreNum;
}

int findHighest(double score1, double score2, double score3, double score4, double score5)
{
        int scoreNum;
        double highestScore;

        //We initialize the highest score to be the 1st score
        scoreNum = 1;
        highestScore = score1;

        if(highestScore < score2)
        {
                scoreNum = 2;
                highestScore = score2;
        }

        if(highestScore < score3)
        {
                scoreNum = 3;
                highestScore = score3;
        }

        if(highestScore < score4)
        {
                scoreNum = 4;
                highestScore = score4;
        }

        if(highestScore < score5)
        {
                scoreNum = 5;
                highestScore = score5;
        }

        return scoreNum;
}
