#include <iostream>
#include <cmath>
using namespace std;

int main()
{
        const double PI = 3.14159;

        int choice;

        //Circle:
        double radius;

        //Rectangle:
        double length,
               width;

        //Triangle:
        double base,
               height;

        //The area of any of the shapes
        double area;

        cout << "\nGeometry Calculator"
             << "\n   1. Calculate the Area of a Circle"
             << "\n   2. Calculate the Area of a Rectangle"
             << "\n   3. Calculate the Area of a Triangle"
             << "\n   4. Quit"
             << "\n\nEnter your choice (1-4): ";

        cin >> choice;

        cout << "\n";//Clear a line
        if((choice < 1) || (choice > 4))
        {
                cout << "You must enter an integer between 1 and 4: \n"
                     << "Restart the program and try again with valid input.";
        }
        else if(choice == 1)//Circle
        {
                cout << "Enter the radius of the circle: ";
                cin >> radius;

                if(radius < 0)
                {
                        cout << "\nThe radius can't have a negative value: \n"
                             << "Restart the program and try again with valid input.";
                }
                else
                {
                        area = pow(radius, 2) * PI;
                        cout << "\nArea of the circle: " << area;
                }
        }
        else if(choice == 2)
        {
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;

                if((length < 0) || (width < 0))
                {
                        cout << "\nThe dimensions of the rectangle can't have negative values: \n"
                             << "Restart the program and try again with valid input.";
                }
                else
                {
                        area = length * width;
                        cout << "\nArea of the rectangle: " << area;
                }
        }
        else if(choice == 3)
        {
                cout << "Enter the length of the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;

                if((base < 0) || (height < 0))
                {
                        cout << "\nThe dimensions of the triangle can't have negative values: \n"
                             << "Restart the program and try again with valid input.";
                }
                else
                {
                        area = base * height / 2.0;
                        cout << "\nArea of the triangle: " << area;
                }
        }
        else//choice == 4
        {
                cout << "Program quit successfully";
        }

        cout << "\n";//Clears a line

        return 0;
}
