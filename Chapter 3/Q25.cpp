#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
        string nameForMonth1,
               nameForMonth2,
               nameForMonth3;

        double rainForMonth1,
               rainForMonth2,
               rainForMonth3;

        double avgMonthlyRain;

        cout << "\nEnter your data in a file named: \'Q25.txt\', if you don't yet have such a file then create one..."
             << "\n\nWrite your input on each line as follows:"
             << "\n-------------------------------------------"
             << "\nLine 1: Enter the name of the first month"
             << "\nLine 2: Enter the total amount of rainfall for the first month"
             << "\nLine 3: Enter the name of the second month"
             << "\nLine 4: Enter the total amount of rainfall for the second month"
             << "\nLine 5: Enter the name of the third month"
             << "\nLine 6: Enter the total amount of rainfall for the third month"
             << "\n\nWhen done hit enter.";

       cin.get();//Pauses the program until the user has entered input into the file

       ifstream inFile;
       inFile.open("Q25.txt");

        inFile >> nameForMonth1;
        inFile >> rainForMonth1;

        inFile >> nameForMonth2;
        inFile >> rainForMonth2;

        inFile >> nameForMonth3;
        inFile >> rainForMonth3;

        inFile.close();

        //Divide by 3 since there are a total of 3 months.
        avgMonthlyRain = (rainForMonth1 + rainForMonth2 + rainForMonth3) / 3;

        cout << "\nThe average monthly rainfall for " << nameForMonth1 << ", "
             << nameForMonth2 << ", and " << nameForMonth3 << " was " << avgMonthlyRain << " inches.\n";

        return 0;
}
