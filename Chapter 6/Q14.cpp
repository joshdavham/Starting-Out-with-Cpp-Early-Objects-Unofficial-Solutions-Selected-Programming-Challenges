//This exercise doesn't completely follow the instructions:
//My overloaded function doesn't return the totalCharges - my overloaded function gets the patient's info
//The function I used to calculate the totalCharges is a function that can be used on both types of patients however (sort of overloaded)
#include <iostream>
#include <iomanip>
using namespace std;

bool inPatient();
void getInfo(int &daysInHosp, double &dailyRate, double &servCharges, double &medCharges);//Function for in-patients
void getInfo(double &servCharges, double &medCharges);//Function for out-patients
double getCharges(double servCharges, double medCharges, int daysInHosp = 0, double dailyRate = 0);//Function for both in-patients and out-patients

int main()
{
        //Patient information
        int daysInHosp;//Used for only in-patients
        double dailyRate,//Used for only in-patients
               servCharges,//Used for both in-patients and out-patients
               medCharges;//Used for both in-patients and out-patients

        double totalCharges;

        cout << "\n";//Clears a line
        if(inPatient())
        {
                getInfo(daysInHosp, dailyRate, servCharges, medCharges);
                totalCharges = getCharges(servCharges,medCharges,daysInHosp,dailyRate);
        }
        else//!inPatient()
        {
                getInfo(servCharges, medCharges);
                totalCharges = getCharges(servCharges,medCharges);
        }

        cout << fixed << showpoint << setprecision(2);
        cout << "\nTotal Charges from Hospital: $" << totalCharges << "\n"
             << "----------------------------\n";


        return 0;
}

bool inPatient()
{
        char input;

        do
        {
                cout << "If you were an out-patient: enter o\n"
                     << "If you were an in-patient: enter i\n"
                     << ": ";
                cin >> input;
        }
        while(input != 'o' && input != 'i');

        cout << "\n";//Clears a line

        if(input == 'i')
        {
                return true;
        }
        else//(input == 'o')
        {
                return false;
        }
}

//in-patient function
void getInfo(int &daysInHosp, double &dailyRate, double &servCharges, double &medCharges)
{
        do
        {
                cout << "Enter the amount of days spent in the hospital: ";
                cin >> daysInHosp;
        }
        while(daysInHosp < 0);

        do
        {
                cout << "Enter the daily rate: ";
                cin >> dailyRate;
        }
        while(dailyRate < 0);

        do
        {
                cout << "Enter the hospital service charges: ";
                cin >> servCharges;
        }
        while(servCharges < 0);

        do
        {
                cout << "Enter the hospital medical charges: ";
                cin >> medCharges;
        }
        while(medCharges < 0);
}

//out-patient function
void getInfo(double &servCharges, double &medCharges)
{
        do
        {
                cout << "Enter the hospital service charges: ";
                cin >> servCharges;
        }
        while(servCharges < 0);

        do
        {
                cout << "Enter the hospital medical charges: ";
                cin >> medCharges;
        }
        while(medCharges < 0);
}

double getCharges(double servCharges, double medCharges, int daysInHosp, double dailyRate)
{
        return servCharges + medCharges + (daysInHosp * dailyRate);
}
