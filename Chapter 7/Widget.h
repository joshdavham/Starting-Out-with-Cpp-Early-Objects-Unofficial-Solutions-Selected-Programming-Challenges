#ifndef WIDGET_H
#define WIDGET_H
using namespace std;

class Widget
{
        private:
                const int widgetsPerHr = 10;
                const int hrsPerDay = 16;//16 work hours in a day
                int widgetsOrdered;

        public:
                Widget();
                void orderWidgets(int numWidgets);
                int getETA();//Get the amount of days it will take to produce them
};

#endif
