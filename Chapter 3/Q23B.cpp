//Program 2
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
        ifstream inFile;
        inFile.open("Q23.txt");

        float f1,
              f2,
              f3,
              f4,
              f5,
              sum;

        inFile >> f1 >> f2 >> f3 >> f4 >> f5;

        sum = f1 + f2 + f3 + f4 + f5;

        cout << "\nf1 = " << f1
             << "\nf2 = " << f2
             << "\nf3 = " << f3
             << "\nf4 = " << f4
             << "\nf5 = " << f5
             << "\nSum = " << sum <<  "\n";


        inFile.close();

        return 0;
}
