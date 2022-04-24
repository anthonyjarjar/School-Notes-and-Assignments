/*

Modify the Movie Data program written for Q1 to include two more members that hold the movie’s production costs 
and first-year revenues. The constructor should be modified so that all six member values can be specified when a
MovieData variable is created. Modify the function that displays the movie data to display the title, director, 
release year, running time, and first year’s profit or loss. Also, improve the program by having the MovieData 
variables passed to the display function as constant references.

*/


#include <iostream>
#include <string>

struct MovieData{
    std::string title, director;
    int releaseYear, runtimeMin, productionCost, revenue; 

    MovieData(std::string t, std::string d, int y, int m, int p, int r){
        title = t; 
        director = d;
        releaseYear = y;
        runtimeMin = m;
        productionCost = p;
        revenue = r;
    }
};

void printData(const MovieData &movie){
    std::cout << "The title of your movie is " << movie.title;
    std::cout << ". The moive was directed by " << movie.director;
    std::cout << ", and was released in the year " << movie.releaseYear << std::endl;
    std::cout << "It has a run time of " << movie.runtimeMin << " min.";
    std::cout << "The production cost was $" << movie.productionCost << " million dollars" << std::endl;
    std::cout << "and acured $" << movie.revenue << " millioin dollars."<< std::endl;
    }

int main(){

    std::cout << "Data for the first movie: " << std::endl;
    struct MovieData firstMovie("The Prestige", "Christopher Nolan", 2006, 130, 40, 109);
    printData(firstMovie);
    std::cout << std::endl;

    std::cout << "Data for the second movie: " << std::endl;
    struct MovieData secondMovie("Truman Show", "Sherry Lansing", 1998, 103, 60, 264);
    printData(secondMovie);

    return 0; 
}