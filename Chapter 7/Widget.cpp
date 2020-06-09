#include "Widget.h"
#include <iostream>
using namespace std;

Widget::Widget()
{
        widgetsOrdered = 0;//We intialize widgetsOrdered
}

void Widget::orderWidgets(int numWidgets)
{
        widgetsOrdered = numWidgets;

        while(widgetsOrdered < 0)
        {
                cout << "Please enter a positive value for the amount of widgets you'd like to order: ";
                cin >> widgetsOrdered;
        }
}

int Widget::getETA()
{
        //Note: if (widgetsOrdered / (widgetsPerHr*hrsPerDay)) is a whole number then
        //      getETA() will be off by 1 - meaning an extra day is used
        return (widgetsOrdered / (widgetsPerHr * hrsPerDay)) + 1;
}
