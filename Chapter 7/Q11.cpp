#include <iostream>
#include "Widget.h"
using namespace std;

int main()
{
        Widget widget;
        int input;

        cout << "\nEnter the amount of widgets you'd like to order: ";
        cin >> input;

        widget.orderWidgets(input);

        cout << "It will take " << widget.getETA() << " days to produce these widgets.\n";

        return 0;
}
