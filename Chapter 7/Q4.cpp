#include <iostream>
#include <iomanip>
using namespace std;

struct MonthlyBudget
{
        double housing,
               utilities,
               householdExpenses,
               transportation,
               food,
               medical,
               insurance,
               entertainment,
               clothing,
               miscellaneous;
};

void getValues(MonthlyBudget &spent);
void displayReport(const MonthlyBudget &budget, const MonthlyBudget &spent);

int main()
{
        MonthlyBudget budget,//The original budget
                      spent;//The amounts actually spent

        //We first initialize the original budget
        budget = {500.00,150.00,65.00,50.00,250.00,30.00,100.00,150.00,75.00,50.00};
        //We then get the user to enter the amounts actually spent on the categories
        getValues(spent);

        displayReport(budget,spent);

        return 0;
}

void getValues(MonthlyBudget &spent)
{
        cout << "\nEnter the amount of money you spent this month on...\n";
        cout << "Housing: ";
        cin >> spent.housing;
        cout << "Utilities: ";
        cin >> spent.utilities;
        cout << "Household Expenses: ";
        cin >> spent.householdExpenses;
        cout << "Transportation: ";
        cin >> spent.transportation;
        cout << "Food: ";
        cin >> spent.food;
        cout << "Medical: ";
        cin >> spent.medical;
        cout << "Insurance: ";
        cin >> spent.insurance;
        cout << "Entertainment: ";
        cin >> spent.entertainment;
        cout << "Clothing: ";
        cin >> spent.clothing;
        cout << "Miscellaneous: ";
        cin >> spent.miscellaneous;

}

void displayReport(const MonthlyBudget &budget, const MonthlyBudget &spent)
{
        //The differences in each budget figure and the amount actually spent in each figure
        double housingDiff,
               utilitiesDiff,
               householdExpensesDiff,
               transportationDiff,
               foodDiff,
               medicalDiff,
               insuranceDiff,
               entertainmentDiff,
               clothingDiff,
               miscellaneousDiff,
               totalDiff;//The amount over or under for the entire monthly budget

        //We calculate each difference
        housingDiff = budget.housing - spent.housing;
        utilitiesDiff = budget.utilities - spent.utilities;
        householdExpensesDiff = budget.householdExpenses - spent.householdExpenses;
        transportationDiff = budget.transportation - spent.transportation;
        foodDiff = budget.food - spent.food;
        medicalDiff = budget.medical - spent.medical;
        insuranceDiff = budget.insurance - spent.insurance;
        entertainmentDiff = budget.entertainment - spent.entertainment;
        clothingDiff = budget.clothing - spent.clothing;
        miscellaneousDiff = budget.miscellaneous - spent.miscellaneous;

        totalDiff = housingDiff + utilitiesDiff + householdExpensesDiff + transportationDiff
                  + foodDiff + medicalDiff + insuranceDiff + entertainmentDiff + clothingDiff
                  + miscellaneousDiff;

        //We now display each budget figure and indicate whether each were under or over spent
        cout << fixed << showpoint << setprecision(2);

        //Housing
        if(housingDiff >= 0)
        {
                cout << "\nHousing Expenses were underspent by: $" << housingDiff;
        }
        else
        {
                housingDiff *= -1;
                cout << "Housing Expenses were overspent by: $" << housingDiff;
        }
        cout << "\n";
        //Utilities
        if(utilitiesDiff >= 0)
        {
                cout << "Utilities Expenses were underspent by: $" << utilitiesDiff;
        }
        else
        {
                utilitiesDiff *= -1;
                cout << "Utilities Expenses were overspent by: $" << utilitiesDiff;
        }
        cout << "\n";
        //Household Expenses
        if(householdExpensesDiff >= 0)
        {
                cout << "Household Expenses were underspent by: $" << householdExpensesDiff;
        }
        else
        {
                householdExpensesDiff *= -1;
                cout << "Household Expenses were overspent by: $" << householdExpensesDiff;
        }
        cout << "\n";
        //Transportation
        if(transportationDiff >= 0)
        {
                cout << "Transportation Expenses were underspent by: $" << transportationDiff;
        }
        else
        {
                transportationDiff *= -1;
                cout << "Transportation Expenses were overspent by: $" << transportationDiff;
        }
        cout << "\n";
        //Food
        if(foodDiff >= 0)
        {
                cout << "Food Expenses were underspent by: $" << foodDiff;
        }
        else
        {
                foodDiff *= -1;
                cout << "Food Expenses were overspent by: $" << foodDiff;
        }
        cout << "\n";
        //Medical
        if(medicalDiff >= 0)
        {
                cout << "Medical Expenses were underspent by: $" << medicalDiff;
        }
        else
        {
                medicalDiff *= -1;
                cout << "Medical Expenses were overspent by: $" << medicalDiff;
        }
        cout << "\n";
        //Insurance
        if(insuranceDiff >= 0)
        {
                cout << "Insurance Expenses were underspent by: $" << insuranceDiff;
        }
        else
        {
                insuranceDiff *= -1;
                cout << "Insurance Expenses were overspent by: $" << insuranceDiff;
        }
        cout << "\n";
        //Entertainment
        if(entertainmentDiff >= 0)
        {
                cout << "Entertainment Expenses were underspent by: $" << entertainmentDiff;
        }
        else
        {
                entertainmentDiff *= -1;
                cout << "Entertainment Expenses were overspent by: $" << entertainmentDiff;
        }
        cout << "\n";
        //clothing
        if(clothingDiff >= 0)
        {
                cout << "Clothing Expenses were underspent by: $" << clothingDiff;
        }
        else
        {
                clothingDiff *= -1;
                cout << "Clothing Expenses were overspent by: $" << clothingDiff;
        }
        cout << "\n";
        //Miscellaneous
        if(miscellaneousDiff >= 0)
        {
                cout << "Miscellaneous Expenses were underspent by: $" << miscellaneousDiff;
        }
        else
        {
                miscellaneousDiff *= -1;
                cout << "Miscellaneous Expenses were overspent by: $" << miscellaneousDiff;
        }
        cout << "\n";
        //Total
        if(totalDiff >= 0)
        {
                cout << "You were under-budget by: $" << totalDiff;
        }
        else
        {
                totalDiff *= -1;
                cout << "You were over-budget by: $" << totalDiff;
        }
        cout << "\n";
}
