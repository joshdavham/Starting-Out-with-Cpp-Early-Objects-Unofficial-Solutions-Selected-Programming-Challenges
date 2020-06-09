#include <iostream>
using namespace std;

int main()
{
        double gallonsOfGas;
        double mpgTown;
        double mpgHW;
        double distTown;
        double distHW;

        gallonsOfGas = 20;
        mpgTown = 21.5;
        mpgHW = 26.8;

        distTown = mpgTown * gallonsOfGas;
        distHW = mpgHW * gallonsOfGas;

        cout << "\nOn one tank of gas the car can travel:"
             << "\n" << distTown << " miles when driven in town and "
             << "\n" << distHW << " miles when driven on the Highway.\n";



        return 0;
}
