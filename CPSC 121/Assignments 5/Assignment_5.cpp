/*

Write a program that produces a bar chart showing the population growth of Prairieville, a small town in the Midwest,
at 20-year intervals during the past 100 years. The program should read in the population figures (rounded to the nearest 
1,000 people) for 1910, 1930, 1950, 1970, 1990, and 2010 from a file. For each year it should display the date and a bar 
consisting of one asterisk for each 1,000 people. The data can be found in the people.txt

*/

#include <iostream>
#include <fstream>
#include <string>

int main() {

    int number, asterisk;

    std::string year[6] = {"1910", "1930", "1950", "1970", "1990", "2010"};

    std::ifstream myFile;
    myFile.open("people.txt");
    
    std::cout << "PRAIRIEVILLE POPULATION GROWTH (each * represents 1000 people)" 
        << std::endl;

    if (!myFile.is_open()) {
        std::cerr << "Could not open the file - '"<< std::endl;
        return EXIT_FAILURE;
    }
    for(int i = 0; i < 5;){
        while (myFile >> number) {
            asterisk = number / 1000;
            std::string population(asterisk, '*');
            std::cout << year[i] << ": " << population << std::endl;
            ++i;
        }
    }
    std::cout << std::endl;
    myFile.close();

    return 0;
}