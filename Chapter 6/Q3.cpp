#include <iostream>
using namespace std;

double fallingDistance(double);

const double g = 9.8;

int main()
{
        double d,
               t;

        for(t = 0; t <= 10; t++)
        {
                d = fallingDistance(t);
                cout << "t = " << t << " seconds, d = " << d << " metres.\n";
        }

        return 0;
}

double fallingDistance(double t)
{
        return 0.5 * g * t * t;
}
