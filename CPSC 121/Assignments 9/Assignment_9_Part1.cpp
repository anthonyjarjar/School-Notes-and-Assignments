/*

Write a program that uses a structure named MovieData to store the following information about a movie: 
title, director, release year, and running time.

Include a constructor that allows all four of these member data values to be specified at the time a 
MovieData variable is created. The program should create two MovieData variables and pass each one in 
turn to a function that displays the information about the movie in a clearly formatted manner. Pass 
the MovieData variables to the display function by value.

*/


#include <iostream>
#include <string>

struct MovieData{
    std::string title;
    std::string director;
    int releaseYear;
    int runtimeMin;

    MovieData(std::string t, std::string d, int y, int m){
        title = t; 
        director = d;
        releaseYear = y;
        runtimeMin = m;
    }

    void printData(){
    std::cout << "The title of your movie is " << title;
    std::cout << ". The moive was directed by " << director;
    std::cout << ", and was released in the year " << releaseYear << std::endl;
    std::cout << "It has a run time of " << runtimeMin << " min." << std::endl;
    }
};


int main(){

    std::cout << "Data for the first movie: " << std::endl;
    struct MovieData firstMovie("The Prestige", "Christopher Nolan", 2006, 130);
    firstMovie.printData();
    std::cout << std::endl;

    std::cout << "Data for the second movie: " << std::endl;
    struct MovieData secondMovie("Turman Show", "Sherry Lansing", 1998, 103);
    secondMovie.printData();

    return 0; 
}