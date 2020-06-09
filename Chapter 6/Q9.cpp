#include <iostream>
using namespace std;

void getInput(int &integer);
bool isPrime(int integer);

int main()
{
        int integer;

        getInput(integer);

        cout << "\n";//Eats a line
        if(isPrime(integer))
        {
                cout << "The integer is Prime.";
        }
        else
        {
                cout << "The integer is composite.";
        }
        cout << "\n";//Eats a line

        return 0;
}

void getInput(int &integer)
{
        cout << "\nEnter a non-negative integer: ";
        cin >> integer;
}

bool isPrime(int integer)
{
        //Will check if the integer is divisible by any number between 1 and itself (exclusive)
        for(int divisor = 2; divisor < integer; divisor++)
        {
                if(integer % divisor == 0)
                {
                        return false;
                }
        }

        //If we made it through that loop then the number is Prime
        return true;
}
