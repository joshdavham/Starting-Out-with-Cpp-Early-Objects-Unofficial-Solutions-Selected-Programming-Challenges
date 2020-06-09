#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct MovieData
{
        string title,
               director;

        int year,
            runningTime;

        double costs,//Production costs
               revenue;//First-Year revenues

        //Constructor
        MovieData(string t = "", string d = "", int y = 0, int r = 0, double c = 0, double rev = 0)
        {
                title = t;
                director = d;
                year = y;
                runningTime = r;
                costs = c;
                revenue = rev;
        }
};

MovieData createMovie();

void printMovieData(const MovieData &movie);

int main()
{
        MovieData movie1,
                  movie2;

        cout << "\n(Movie #1)";
        movie1 = createMovie();
        cout << "\n(Movie #2)";
        movie2 = createMovie();

        cout << "\n(Movie #1)";
        printMovieData(movie1);
        cout << "\n(Movie #2)";
        printMovieData(movie2);

        return 0;
}

//I didn't include error checking.
MovieData createMovie()
{
        string title,
               director;

        int year,
            runningTime;

        double costs,
               revenue;

        cout << "\nEnter the title of the movie: ";
        getline(cin,title);
        cout << "Enter the name of " << title << "\'s director: ";
        getline(cin,director);
        cout << "Enter the year " << title << " was released: ";
        cin >> year;
        cout << "Enter the running time of " << title << ": ";
        cin >> runningTime;
        cout << "Enter the production costs: ";
        cin >> costs;
        cout << "Enter the first-year revenues: ";
        cin >> revenue;
        cin.ignore();//Skips the newline character

        MovieData movie(title,director,year,runningTime,costs,revenue);

        return movie;
}

void printMovieData(const MovieData &movie)
{
        double profit,//First-Year profits
               losses;//First-Year losses

        cout << fixed << showpoint << setprecision(2);
        cout << "\n";//Clear a line
        cout << "Movie Data:\n"
             << "-----------\n"
             << "Title: " << movie.title << "\n"
             << "Director: " << movie.director << "\n"
             << "Year released: " << movie.year << "\n"
             << "Running Time: " << movie.runningTime << " minutes\n";
        profit = movie.revenue - movie.costs;
        if(profit >= 0)
        {
                cout << "Profit: $" << profit;
        }
        else//profit < 0
        {
                losses = profit * -1;
                cout << "Losses: $" << losses;
        }
        cout << "\n";//Clear a line
}
