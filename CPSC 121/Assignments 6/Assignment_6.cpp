/*

Write a program that determines which of a company's four divisions (Northeast,Southeast , Northwest, and Southwest) 
had the greatest sales for a quarter. It should include the following two functions , which are called by main.

•Double getSales() is passed the name of a division. It asks the user for a division's quarterly sales figure, validates 
that the input is not less than 0, then returns it. It should be called once for each division.

•Void findHighest() is passed the four sales. It determines which is the largest and prints the name of the high grossing 
division, along with its sales figure.

*/

#include <iostream>
#include <string>


double getSales(std::string divisonName){
    int sales;
    std::cout << "What is the quarterly sales figure for " << divisonName << ": ";

    while(!(std::cin >> sales) || (sales < 1)){
        std::cout << "Input must be greater than 0 please re-input: ";
        std::cin.clear();
        std::cin.ignore(1200, '\n');
    }

    return sales;
}

void findHighest(){
    int NE = getSales("Northeast");
    int NW = getSales("Northwest");
    int SE = getSales("Southeast");
    int SW = getSales("Southeast");

    if((NE > NW) && (NE > SE) && (NE > SW)){
        std::cout << "The highest grossing division was the Northeast, earning $" << NE 
            << std::endl;
    }else if((NW > NE) && (NW > SE) && (NW > SW)){
        std::cout << "The highest grossing divisoin was the Northwest, earning $" << NW
            << std::endl;
    }else if((SE > NE) && (SE > NW) && (SE > SW)){
        std::cout << "The highest grossing division was the Southeast, earning $" << SE
            << std::endl;
    }else if((SW > NE) && (SW > NW) && (SW > SE)){
        std::cout << "The highest grossing division was the Southwest, earning $" << SW
            << std::endl;
    }else{
        std::cout << "Unable to determine highest grossing division.";
    }
}

int main() {
    
    findHighest();

    return 0;
}