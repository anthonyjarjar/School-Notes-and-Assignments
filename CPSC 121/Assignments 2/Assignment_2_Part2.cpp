/*

2)There are three seating categories at a stadium. For a softball game, Class A seats cost $15, Class B seats cost $12, 
and Class C seats cost $9. Write a program that asks how many tickets for each class of seats were sold, then displays 
the amount of income generated from ticket sales. Format your dollar amount in a fixed-point notation with two decimal 
points and make sure the decimal point is always displayed.

*/

#include <iostream>
#include <iomanip>

int main() {

    const double classACost {15.00}, classBCost {12.00}, classCCost {9.00};

    double soldA, soldB, soldC, totalProfit;

    std::cout << "How many class A tickets were sold: ";
    std::cin >> soldA;
    std::cout << std::endl;
 
    std::cout << "How many class B tickets were sold: ";
    std::cin >> soldB;
    std::cout << std::endl;

    std::cout << "How many class C tickers were sold: ";
    std::cin >> soldC;
    std::cout << std::endl;

    totalProfit = (classACost * soldA) + (classBCost * soldB) + (classCCost * soldC);

    std::cout << std::fixed << std::setprecision(2) << "The total profit accumlated was $" << totalProfit << std::endl; 


    return 0;
}