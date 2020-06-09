#include <iostream>
#include <string>
#include "CharConverter.h"
using namespace std;

void getInput(string &str);

int main()
{
        CharConverter cc;
        string str;

        getInput(str);
        while(str != "")
        {
                cout << "\ncc.uppercase(" << str << ") = " << cc.uppercase(str)
                     << "\ncc.properWords(" << str << ") = " << cc.properWords(str) << "\n";

                getInput(str);
        }

        return 0;
}

void getInput(string &str)
{
        cout << "\nEnter a string or just *enter* to quit: ";
        getline(cin,str);
}
