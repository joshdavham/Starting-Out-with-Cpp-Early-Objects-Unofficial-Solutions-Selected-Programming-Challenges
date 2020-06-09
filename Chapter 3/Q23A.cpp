//Program 1
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
        ofstream outputFile;
        outputFile.open("Q23.txt");

        float f1,
              f2,
              f3,
              f4,
              f5;

        cout << "\nEnter the 1st floating-point number: ";
        cin >> f1;
        outputFile << f1 << "\n";

        cout << "Enter the 2nd floating-point number: ";
        cin >> f2;
        outputFile << f2 << "\n";

        cout << "Enter the 3rd floating-point number: ";
        cin >> f3;
        outputFile << f3 << "\n";

        cout << "Enter the 4th floating-point number: ";
        cin >> f4;
        outputFile << f4 << "\n";

        cout << "Enter the 5th floating-point number: ";
        cin >> f5;
        outputFile << f5 << "\n";



        outputFile.close();

        cout << "\nOutput written to \'Q23.txt\'\n";


        return 0;
}
