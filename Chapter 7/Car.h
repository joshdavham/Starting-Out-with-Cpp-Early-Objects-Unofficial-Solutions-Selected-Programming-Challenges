#ifndef CAR_H
#define CAR_H
#include <string>
using namespace std;

class Car
{
        private:
                int year,
                    speed;
                string make;

        public:
                Car(int y, string m);
                int getYear();
                int getSpeed();
                string getMake();
                void accelerate();
                void brake();

};

#endif
