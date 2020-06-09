#include <iostream>
#include "IntRange.h"
using namespace std;

void setValues(int &height, int &weight, int &age);
void printValues(const int height, const int weight, const int age);

int main()
{
        int height,
            weight,
            age;

        setValues(height,weight,age);

        printValues(height,weight,age);

        return 0;
}

void setValues(int &height, int &weight, int &age)
{
        //Used to get valid input for height, weight, and age. We assume a man is providing input

        IntRange validHeight(22,99);//The world's smallest man is 21.5 inches tall and
                                    //the world's tallest man is 99 inches tall

        IntRange validWeight(32, 1345);//I couldn't find good data on the 'lightest' man alive so i'll use the weight of the world's shortest man (32lb)
                               //The heaviest person alive is 1345 pounds

        IntRange validAge(0,113);//You can't be below 0 years old (duh)
                            //The oldest man is 113 years old

        cout << "\nEnter your height (inches): ";
        height = validHeight.getInt();

        cout << "Enter your weight (lbs): ";
        weight = validWeight.getInt();

        cout << "Enter you age (years): ";
        age = validAge.getInt();
}

void printValues(const int height, const int weight, const int age)
{
        cout << "\nMeasurements:\n"
             << "-------------\n"
             << "Height: " << height << "\n"
             << "Weight: " << weight << "\n"
             << "Age: " << age << "\n";
}
