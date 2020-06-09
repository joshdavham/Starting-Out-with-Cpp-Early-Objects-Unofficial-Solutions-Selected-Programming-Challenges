#include <iostream>
#include <string>
using namespace std;

struct MovieData
{
        string title,
               director;

        int year,
            runningTime;

        //Constructor
        MovieData(string t = "", string d = "", int y = 0, int r = 0)
        {
                title = t;
                director = d;
                year = y;
                runningTime = r;
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

        cout << "\nEnter the title of the movie: ";
        getline(cin,title);
        cout << "Enter the name of " << title << "\'s director: ";
        getline(cin,director);
        cout << "Enter the year " << title << " was released: ";
        cin >> year;
        cout << "Enter the running time of " << title << ": ";
        cin >> runningTime;
        cin.ignore();//Skips the newline character

        MovieData movie(title,director,year,runningTime);

        return movie;
}

void printMovieData(const MovieData &movie)
{
        cout << "\n";//Clear a line
        cout << "Movie Data:\n"
             << "-----------\n"
             << "Title: " << movie.title << "\n"
             << "Director: " << movie.director << "\n"
             << "Year released: " << movie.year << "\n"
             << "Running Time: " << movie.runningTime << " minutes\n";
}
