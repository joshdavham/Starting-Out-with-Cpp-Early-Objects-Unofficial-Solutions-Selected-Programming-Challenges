#include <iostream>
using namespace std;

double celsius(double fahrenheit);

int main()
{
        double fahrenheit,
               C;

        for(fahrenheit = 0; fahrenheit <= 20; fahrenheit++)
        {
                C = celsius(fahrenheit);
                cout << fahrenheit << "F = " << C << "C\n";
        }


        return 0;
}

double celsius(double fahrenheit)
{
        return (5.0 / 9.0) * (fahrenheit - 32.0);
}
