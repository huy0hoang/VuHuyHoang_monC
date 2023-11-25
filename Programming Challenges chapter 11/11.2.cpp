#include <iostream>
#include <string>

using namespace std;

struct MovieData {
    string title;
    string director;
    int yearReleased;
    int runningTime;
    double productionCosts;
    double firstYearRevenue;
};

void displayMovieData(const MovieData& movie) {
    cout << "Title: " << movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Year Released: " << movie.yearReleased << endl;
    cout << "Running Time: " << movie.runningTime << " minutes" << endl;
    cout << "First Year's Profit/Loss: $" << (movie.firstYearRevenue - movie.productionCosts) << endl;
    cout << endl;
}

int main() {
    MovieData movie1;
    movie1.title = "The Shawshank Redemption";
    movie1.director = "Frank Darabont";
    movie1.yearReleased = 1994;
    movie1.runningTime = 142;
    movie1.productionCosts = 25000000;
    movie1.firstYearRevenue = 58900000;

    MovieData movie2;
    movie2.title = "The Godfather";
    movie2.director = "Francis Ford Coppola";
    movie2.yearReleased = 1972;
    movie2.runningTime = 175;
    movie2.productionCosts = 6000000;
    movie2.firstYearRevenue = 28600000;

    displayMovieData(movie1);
    displayMovieData(movie2);

    return 0;
}