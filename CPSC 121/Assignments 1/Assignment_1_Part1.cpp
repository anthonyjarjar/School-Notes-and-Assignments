/*

1) One acre of land is equivalent to 43,450 square feet. Write a program that calculates and displays 
the number of acres in a tract of land whose size is number of acres in a tract of land 869×360 feet.

*/

#include <iostream>

int main (){

    double acre {43450};
    double squareFeet = 869 * 360;
    double result = squareFeet / acre;

    std::cout << "The numbers of acres in a tract of land who's square feet is " << squareFeet
    << " is " << result << " acres" << std::endl;


    return 0;
}