#include <iostream>
#include "Heading.h"
#include <string>
using namespace std;

Heading createHeading();

int main()
{
        Heading head;

        head = createHeading();

        head.printHeading();

        return 0;
}

Heading createHeading()
{
        string company,
               report;

        cout << "Enter the company name: ";
        getline(cin,company);
        cout << "Enter the report name: ";
        getline(cin,report);

        Heading head(company,report);

        return head;
}
