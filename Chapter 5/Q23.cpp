//For this program I made my own .txt (not .dat) file with my own data.\
//The file is Q23.txt

#include <iostream>
#include <fstream>
using namespace std;

int main()
{

        ifstream inputFile;
        int population,
            numAst,//Number of asterixes
            year;

        inputFile.open("Q23.txt");
        if(!inputFile)
        {
                cout << "Error opening file.\n"
                     << "Please try again.\n";
        }
        else
        {
                //Display Banner
                cout << "PRAIREVILLE POPULATION GROWTH\n"
                     << "(each * represents 1000 people)\n\n";

                year = 1900;//Initialize the year to 1900
                while(inputFile >> population)
                {
                        numAst = population / 1000;
                        cout << year << "  ";
                        for(int i = 1; i<= numAst; i++)
                        {
                                cout << "*";
                        }
                        cout << "\n";//Start a new line.
                        year += 20;//Increment the year by 20 years
                }
        }
        inputFile.close();//Remember to close the file...






        return 0;
}
