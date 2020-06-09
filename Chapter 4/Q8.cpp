#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
        int randNum1,
            randNum2,
            answer,
            userAnswer;

        //This makes sure I get different random numbers every time I run the program.
        unsigned seed;
        seed = time(0);
        srand(seed);

        //Generates two random ints between 10 and 50
        randNum1 = 10 + rand() % 51;
        randNum2 = 10 + rand() % 51;

        answer = randNum1 + randNum2;

        cout << "\n " << randNum1
             << "\n+" << randNum2
             << "\n---\n";

        cin >> userAnswer;

        cout << "\n";//Clears a line
        if(userAnswer == answer)
        {
                cout << "Congratulations, you are correct!";
        }
        else//userAnswer != answer
        {
                cout << "Incorrect..\n"
                     << "The correct answer is: " << answer << ".";
        }
        cout << "\n";//Clears a line.

        return 0;
}
