#include "Heading.h"
#include <iostream>
#include <string>
using namespace std;

Heading::Heading(string c, string r)
{
        company = c;
        report = r;
}

void Heading::printHeading()
{
        string longest,
               shortest;

        //We find out if the company name is longer than the report name and the converse
        if(company.length() > report.length())
        {
                longest = company;
                shortest = report;
        }
        else
        {
                longest = report;
                shortest = company;
        }

        //Print the top *'s'
        cout << "*****";
        for(int i = 1; i <= longest.length(); i++)
        {
                cout << "*";
        }
        cout << "*****\n";

        //Print the Text in the header
        if(longest == company)
        {
                //Print the company
                cout << "     " << company << "\n";

                //Print the report
                cout << "     ";
                for(int i = 1; i <= (company.length() - report.length())/2; i++)
                {
                        cout << " ";
                }
                cout << report << "\n";
        }
        else//longest = report
        {

                //print the company
                cout << "     ";
                for(int i = 1; i <= (report.length() - company.length())/2; i++)
                {
                        cout << " ";
                }
                cout << company << "\n";

                //Print the report
                cout << "     " << report << "\n";
        }

        //Print the bottom *'s
        cout << "*****";
        for(int i = 1; i <= longest.length(); i++)
        {
                cout << "*";
        }
        cout << "*****\n";
}
