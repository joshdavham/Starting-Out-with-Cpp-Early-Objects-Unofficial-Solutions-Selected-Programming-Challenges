//I instead chose to make my own test-file: 'Q26.txt'
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
        ifstream inputFile;

        int firstLine;//A boolean value signalling that the first value was just read.

        string frontStudent,
               backStudent,
               input;

        inputFile.open("Q26.txt");
        if(!inputFile)
        {
                cout << "Error opening file.\n"
                     << "Please make sure that \'Q26.txt\' exists in the current directory and try again.\n\n";
        }
        else
        {
                firstLine = 1;
                while(inputFile >> input)
                {
                        if(firstLine)
                        {
                                //Initialize the names of the front and back student
                                frontStudent = input;
                                backStudent = input;
                                firstLine = 0;//No longer the first line
                        }

                        if(frontStudent > input)
                        {
                                frontStudent = input;
                        }

                        if(backStudent < input)
                        {
                                backStudent = input;
                        }
                }
        }

        inputFile.close();

        cout << "\nStudent to be at the front of the line: " << frontStudent
             << "\nStudent to be at the back of the line: " << backStudent << "\n";

        return 0;
}
