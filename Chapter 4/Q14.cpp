#include <iostream>
using namespace std;

int main()
{
        const double WEIGHT_FACTOR = 703, //Factor used to convert weight to BMi
                     LOWER_BMI = 18.5,//The lowest possible BMI for a healthy sedentary person
                     UPPER_BMI = 25;//The highest possible BMI for a healthy sedentary person

        double weight,
               height,
               bmi;

        cout << "\nEnter the sedentary person's weight: ";
        cin >> weight;
        cout << "Enter the person's height: ";
        cin >> height;

        bmi = weight * WEIGHT_FACTOR / pow(height,2);

        if(bmi < LOWER_BMI)
        {
                cout << "\nThe sedantary person is underweight.\n";
        }
        else if(bmi > UPPER_BMI)
        {
                cout << "\nThe sedentary person is overweight.\n";
        }
        else//LOWER_BMI <= bmi <= UPPER_BMI
        {
                cout << "\nThe sedentary person's weight is optimal.\n";
        }


        return 0;
}
