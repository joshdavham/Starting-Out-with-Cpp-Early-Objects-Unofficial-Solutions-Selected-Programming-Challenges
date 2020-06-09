#include <iostream>
#include <string>
using namespace std;

int main()
{
        int numStudents;

        string frontStudent,
               backStudent,
               input;

        cout << "\nEnter the amount of students in the line: ";
        cin >> numStudents;

        while( (numStudents < 1) || (numStudents > 25) )
        {
                cout << "\nYou must enter between 1 and 25 students. Try again: ";
                cin >> numStudents;
        }


        cout << "\nEnter the first name of student #1: ";
        cin >> input;

        //Initialize the names of the front and the back student
        frontStudent = input;
        backStudent = input;


        for(int i = 2; i <= numStudents; i++)
        {
                cout << "\nEnter the first name of student #" << i << ": ";
                cin >> input;

                if(frontStudent > input)
                {
                        frontStudent = input;
                }

                if(backStudent < input)
                {
                        backStudent = input;
                }
        }

        cout << "\nStudent to be at the front of the line: " << frontStudent
             << "\nStudent to be at the back of the line: " << backStudent << "\n";


        return 0;
}
