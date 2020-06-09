#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        /*There are 10 servings in a bag of cookies and a single serving has 300 calories
        therefore there are 10*300 = 3000 calories in a bag of cookies.
        Since the bag has 40 cookies ---> 40 cookies = 3000 calories,
        thus each cookie has 3000/40 = 75 calories.*/
        const double CALS_PER_COOKIE = 75;

        int numCookies;
        double totalCals;

        cout << "Enter the amount of cookies you've eaten: ";
        cin >> numCookies;

        totalCals = numCookies * CALS_PER_COOKIE;

        cout << "\nYou've consumed " << fixed << showpoint << setprecision(2) << totalCals << " calories.\n";



        return 0;
}
