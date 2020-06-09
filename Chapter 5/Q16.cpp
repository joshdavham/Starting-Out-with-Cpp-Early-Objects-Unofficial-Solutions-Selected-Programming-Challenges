#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
        int randNum1,
            randNum2,
            choice,
            answer,
            userAnswer;

        //This makes sure I get different random numbers every time I run the program.
        unsigned seed;
        seed = time(0);
        srand(seed);

        do
        {
                cout << "\nMath Tutor"
                     << "\n---------"
                     << "\nMenu:"
                     << "\n\t1. Addition Problem"
                     << "\n\t2. Subtraction Problem"
                     << "\n\t3. Multiplication Problem"
                     << "\n\t4. Quit\n"
                     << "\nEnter numbers 1-4";

                cin >> choice;

                //Generates two random ints between 10 and 50
                randNum1 = 10 + rand() % 51;
                randNum2 = 10 + rand() % 51;



                if(choice == 1)//Addition
                {
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
                }
                else if(choice == 2)//Subtraction
                {
                        answer = randNum1 - randNum2;

                        cout << "\n " << randNum1
                             << "\n-" << randNum2
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
                }
                else if(choice == 3)//Multiplication
                {
                        answer = randNum1 * randNum2;

                        cout << "\n " << randNum1
                             << "\n*" << randNum2
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

                }
                else if(choice != 4)//Choice isn't 1,2,3 or 4 - Error
                {
                        cout << "\nError - You must enter either 1,2,3 or 4.";
                }

                cout << "\n\n";
        } while(choice != 4);
        cout << "Programming Quit Successfully.\n";






        cout << "\n";//Clears a line.

        return 0;
}
