#include <iostream>
using namespace std;

int main()
{
        double l1,//l1 = length of the first rectangle.... you get the point
               w1,
               a1,//a1 = area of the first rectangle
               l2,
               w2,
               a2;

        cout << "\nEnter the length of the first rectangle: ";
        cin >> l1;
        cout << "Enter the width of the first rectangle: ";
        cin >> w1;
        cout << "\nEnter the length of the second rectangle: ";
        cin >> l2;
        cout << "Enter the width of the second rectangle: ";
        cin >> w2;

        a1 = l1 * w1;
        a2 = l2 * w2;

        if(a1 < a2)
        {
                cout << "\nRectangle 2 has a greater area than Rectangle 1.\n";
        }
        else if(a1 > a2)
        {
                cout << "\nRectangle 1 has a greater area than Rectangle 2.\n";
        }
        else//a1 == a2
        {
                cout << "\nRectangle 1 and Rectangle 2 have equal area.\n";
        }


        return 0;
}
