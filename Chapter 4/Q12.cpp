#include <iostream>
#include <string>
using namespace std;

int main()
{

        string name1,
               name2,
               name3;

        double time1,
               time2,
               time3;

        //First runner
        cout << "\nEnter the name of the first runner: ";
        getline(cin, name1);
        cout << "Enter the time it took " << name1 << " to finish the race: ";
        cin >> time1;

        //Second Runner
        cout << "\nEnter the name of the second runner: ";
        cin.ignore(1000,'\n');//Clears the buffer for getline(...)
        getline(cin, name2);
        cout << "Enter the time it took " << name2 << " to finish the race: ";
        cin >> time2;

        //Third Runner
        cout << "\nEnter the name of the third runner: ";
        cin.ignore(1000,'\n');//Clears the buffer for getline(...)
        getline(cin, name3);
        cout << "Enter the time it took " << name3 << " to finish the race: ";
        cin >> time3;

        cout << "\n";//Clears a line
        if((time1 > 0) && (time2 > 0) && (time3 > 0))
        {
                //There are 3P3 = 3! = 3*2*1 = 6 possible different finish orders
                if( (time1 <= time2) && (time2 <= time3) )//1,2,3 - Finish order: runner1,runner2,runner3
                {
                        cout << "1st: " << name1 << " Time: " << time1 << "\n"
                             << "2nd: " << name2 << " Time: " << time2 << "\n"
                             << "3rd: " << name3 << " Time: " << time3;
                }
                else if( (time1 <= time3) && (time3 <= time2) )//1,3,2
                {
                        cout << "1st: " << name1 << " Time: " << time1 << "\n"
                             << "2nd: " << name3 << " Time: " << time3 << "\n"
                             << "3rd: " << name2 << " Time: " << time2;
                }
                else if( (time2 <= time1) && (time1 <= time3) )//2,1,3
                {
                        cout << "1st: " << name2 << " Time: " << time2 << "\n"
                             << "2nd: " << name1 << " Time: " << time1 << "\n"
                             << "3rd: " << name3 << " Time: " << time3;
                }
                else if( (time2 <= time3) && (time3 <= time1) )//2,3,1
                {
                        cout << "1st: " << name2 << " Time: " << time2 << "\n"
                             << "2nd: " << name3 << " Time: " << time3 << "\n"
                             << "3rd: " << name1 << " Time: " << time1;
                }
                else if( (time3 <= time1) && (time1 <= time2) )//3,1,2
                {
                        cout << "1st: " << name3 << " Time: " << time3 << "\n"
                             << "2nd: " << name1 << " Time: " << time1 << "\n"
                             << "3rd: " << name2 << " Time: " << time2;
                }
                else if( (time3 <= time2) && (time2 <= time1) )//3,2,1
                {
                        cout << "1st: " << name3 << " Time: " << time3 << "\n"
                             << "2nd: " << name2 << " Time: " << time2 << "\n"
                             << "3rd: " << name1 << " Time: " << time1;
                }
                //No need for a tailing else...
        }
        else
        {
                cout << "None of the running times can be negative or 0: \n"
                     << "Restart the program and try again with valid input.";
        }

        cout << "\n";//Clears a line

        return 0;
}
