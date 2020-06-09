#include <iostream>
using namespace std;

int main()
{
        int numCustomers = 12467;

        //Recall 14% = 0.14 = 14/100. Also that dividing by 100 is an integer division and returns an integer.
        cout << "\n" << numCustomers * 14 / 100
             << " of the customers surveyed purchase one or more energy drinks per week.";


        cout << "\n" << numCustomers * 64 / 100
             << " of the customers surveyed prefer citrus flavoured energy drinks.\n";

        return 0;
}
