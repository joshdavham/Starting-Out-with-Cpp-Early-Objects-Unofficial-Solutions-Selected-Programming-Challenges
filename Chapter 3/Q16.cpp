#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
        int randNum1,
            randNum2,
            answer;

        //This makes sure I get different random numbers every time I run the program.
        unsigned seed;
        seed = time(0);
        srand(seed);

        //Generates two random ints between 1 and 9
        randNum1 = 1 + rand() % 9;
        randNum2 = 1 + rand() % 9;

        answer = randNum1 + randNum2;

        cout << "\n " << randNum1
             << "\n+" << randNum2
             << "\n--\n";
        cin.get();//Allows the user to enter any number then presses enter.

        cout << "\nThe correct answer is: " << answer << "\n";

        return 0;
}
