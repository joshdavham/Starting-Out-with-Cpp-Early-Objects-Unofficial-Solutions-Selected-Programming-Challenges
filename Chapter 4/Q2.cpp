#include <iostream>
using namespace std;

int main()
{
        int num;

        cout << "\nEnter an integer between 1 and 10 inclusive to be displayed as a Roman numeral: ";
        cin >> num;

        cout << "\n";//Clears a line

        switch(num)
        {
                case 1: cout << "\'1\' = I";
                        break;
                case 2: cout << "\'2\' = II";
                        break;
                case 3: cout << "\'3\' = III";
                        break;
                case 4: cout << "\'4\' = IV";
                        break;
                case 5: cout << "\'5\' = V";
                        break;
                case 6: cout << "\'6\' = VI";
                        break;
                case 7: cout << "\'7\' = VII";
                        break;
                case 8: cout << "\'8\' = VIII";
                        break;
                case 9: cout << "\'9\' = IX";
                        break;
                case 10: cout << "\'10\' = X";
                        break;
                default: cout << "You must enter an integer between 1 and 10 inclusive:"
                              << "\nRestart the program and try again with valid input.\n";
        }

        cout << "\n";//Clears a line



        return 0;
}
