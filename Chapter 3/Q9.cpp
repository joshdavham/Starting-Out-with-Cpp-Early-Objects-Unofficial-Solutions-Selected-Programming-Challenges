#include <iostream>
using namespace std;

int main()
{
        const double WIDGET_WEIGHT = 9.2;

        double palletWeight,
               stackWeight;//The weight of the pallet with the widgets stacked on it

        int numWidgets;

        cout << "Enter the weight of the pallet when nothing is stacked on top of it: ";
        cin >> palletWeight;

        cout << "Enter the total weight of the pallet with the widgets stacked on top of it: ";
        cin >> stackWeight;

        numWidgets = (stackWeight - palletWeight) / WIDGET_WEIGHT;

        cout << "\nThere are an estimated " << numWidgets << " widgets stacked on the pallet.\n";
        

        return 0;
}
