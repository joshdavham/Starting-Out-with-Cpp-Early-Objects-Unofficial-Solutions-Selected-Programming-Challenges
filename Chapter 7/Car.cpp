#include "Car.h"
using namespace std;

Car::Car(int y, string m)
{
        year = y;
        make = m;
        speed = 0;
}

int Car::getYear()
{
        return year;
}

string Car::getMake()
{
        return make;
}

int Car::getSpeed()
{
        return speed;
}

void Car::accelerate()
{
        speed += 5;
}

void Car::brake()
{
        speed -= 5;
}
