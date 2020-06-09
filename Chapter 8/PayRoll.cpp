#include "PayRoll.h"

PayRoll::PayRoll()
{
        rate = 0;
        hours = 0;
}

void PayRoll::setRate(double r)
{
        rate = r;
}

void PayRoll::setHours(double h)
{
        hours = h;
}

double PayRoll::getPay()
{
        return rate * hours;
}
