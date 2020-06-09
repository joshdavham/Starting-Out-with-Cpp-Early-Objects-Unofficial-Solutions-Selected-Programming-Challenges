#include <iostream>
using namespace std;

int main()
{
        //The upper waveLength cutoffs for cetain types of radiation
        const double GAMMA_RAY = 1E-11,
                     X_RAY = 1E-8,
                     UV_RAY = 4E-7,
                     VIS_LIGHT = 7E-7,
                     INFRARED = 1E-3,
                     MICROWAVE = 1E-2;
                     //Radio wave = infinity

        double waveLength;

        cout << "\nEnter the wavelength of the electromagnetic wave: ";
        cin >> waveLength;

        cout << "\n";//Eats a line
        //No input validation was requested so i'll assume negative wavelengths exist (hehe :D)
        if(waveLength < GAMMA_RAY)
        {
                cout << "The wave was a Gamma Ray.";
        }
        else if(waveLength < X_RAY)
        {
                cout << "The wave was an X-Ray.";
        }
        else if(waveLength < UV_RAY)
        {
                cout << "The wave was Ultraviot.";
        }
        else if(waveLength < VIS_LIGHT)
        {
                cout << "The wave was that of Visible Light.";
        }
        else if(waveLength < INFRARED)
        {
                cout << "The wave was Infrared.";
        }
        else if(waveLength < MICROWAVE)
        {
                cout << "The wave was a Microwave.";
        }
        else//Radio Wave
        {
                cout << "The wave was a Radio Wave.";
        }
        cout << "\n";//Clears a line.


        return 0;
}
