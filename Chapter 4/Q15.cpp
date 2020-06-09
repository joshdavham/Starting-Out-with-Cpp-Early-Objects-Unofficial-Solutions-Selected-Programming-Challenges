#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        const double LOW_FAT_PERCENTAGE = 0.3; /*The lowest percentage of calories from fat
                                               for a food that satisfies the condition of
                                               being 'high in fat'.*/

        double calories, //Total calories in the food
               fatGrams,
               fatCals,//Fat from calories
               percCalsFat;//Percent of calories from fat

        cout << "\nEnter the number calories in the food: ";
        cin >> calories;
        cout << "Enter the number of grams of fat in the food: ";
        cin >> fatGrams;

        cout << "\n";//Clears a line
        if(calories > 0 && fatGrams > 0)
        {
                fatCals = fatGrams * 9;
                percCalsFat = fatCals / calories;

                if(fatCals <= calories)
                {
                        cout << "Percentage of calories that come from fat: " << fixed << showpoint
                             << setprecision(2) << 100.0 * percCalsFat << "%\n";

                        if(percCalsFat < LOW_FAT_PERCENTAGE)
                        {
                                cout << "The food is low in fat.";
                        }
                        else
                        {
                                cout << "The food is high in fat.";
                        }
                }
                else
                {
                        cout << "It was calculated that there were more calories from the\n"
                             << "grams of fat in the food than there are calories in the food itself\n"
                             << "meaning that there must have been an error in the numbers entered:\n"
                             << "\nRestart the program and try again with valid input.";
                }
        }
        else
        {
                cout << "The number of calories must be greater than 0: \n"
                     << "Restart the program and try again with valid input.";
        }
        cout << "\n";//Clears a line

        return 0;
}
