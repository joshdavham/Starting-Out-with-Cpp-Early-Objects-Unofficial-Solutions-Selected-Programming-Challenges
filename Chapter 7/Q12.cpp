#include <iostream>
#include "Car.h"
using namespace std;

int main()
{
        Car car(2014, "Ford Focus");

        //Accelerate the car 5 times
        car.accelerate();
        cout << "Speed: " << car.getSpeed() << "\n";
        car.accelerate();
        cout << "Speed: " << car.getSpeed() << "\n";
        car.accelerate();
        cout << "Speed: " << car.getSpeed() << "\n";
        car.accelerate();
        cout << "Speed: " << car.getSpeed() << "\n";
        car.accelerate();
        cout << "Speed: " << car.getSpeed() << "\n";

        //Brake the car 5 times
        car.brake();
        cout << "Speed: " << car.getSpeed() << "\n";
        car.brake();
        cout << "Speed: " << car.getSpeed() << "\n";
        car.brake();
        cout << "Speed: " << car.getSpeed() << "\n";
        car.brake();
        cout << "Speed: " << car.getSpeed() << "\n";
        car.brake();
        cout << "Speed: " << car.getSpeed() << "\n";

        return 0;
}
