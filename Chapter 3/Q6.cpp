#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        double score1,
               score2,
               score3,
               score4,
               score5;

        double scoreAvg;

        cout << "\nEnter the score of the 1st test: ";
        cin >> score1;
        cout << "Enter the score of the 2nd test: ";
        cin >> score2;
        cout << "Enter the score of the 3rd test: ";
        cin >> score3;
        cout << "Enter the score of the 4th test: ";
        cin >> score4;
        cout << "Enter the score of the 5th test: ";
        cin >> score5;

        //Divided by 5 since there are 5 tests.
        scoreAvg = (score1 + score2 + score3 + score4 + score5) / 5;

        cout << "\nThe average test score is: " << fixed << showpoint << setprecision(1) << scoreAvg << "\n";

        return 0;
}
