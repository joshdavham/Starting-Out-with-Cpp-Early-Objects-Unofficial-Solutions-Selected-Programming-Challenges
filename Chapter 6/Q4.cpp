#include <iostream>
using namespace std;

double kineticEnergy(double m, double v);
void getInput(double &m, double &v);

int main()
{
        double m,
               v,
               KE;

        getInput(m,v);

        KE = kineticEnergy(m,v);

        cout << "\nThe object's kintetic energy is: " << KE << " joules.\n";

        return 0;
}

double kineticEnergy(double m, double v)
{
        return 0.5 * m * v * v;
}

void getInput(double &m, double &v)
{
        cout << "Enter the object's mass: ";
        cin >> m;
        cout << "Enter the object's velocity: ";
        cin >> v;
}
