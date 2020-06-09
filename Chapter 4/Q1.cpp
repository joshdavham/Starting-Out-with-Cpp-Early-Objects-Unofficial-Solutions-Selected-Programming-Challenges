#include <iostream>
using namespace std;

int main()
{
        double num1,
               num2;

        cout << "\nEnter a number: ";
        cin >> num1;
        cout << "Enter another number: ";
        cin >> num2;

        if (num1 > num2)
        {
                cout << "\n" << num1 << " is the bigger number."
                     << "\nand " << num2 << " is the smaller number.\n";
        }
        else if (num1 < num2)
        {
                cout << "\n" << num2 << " is the bigger number."
                     << "\nand " << num1 << " is the smaller number.\n";
        }
        else//num1 == num2
        {
                cout << "\nNeither number is bigger - they are equal."
                     << "\n(" << num1 << " = " << num2 << ")\n";
        }



        return 0;
}
