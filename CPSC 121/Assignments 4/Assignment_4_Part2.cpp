/*

Write a program that calculates how much a person earns in a month if the salary is one penny the first day, 
two pennies the second day, four pennies the third day, and so on with the daily pay doubling each day the employee
works. The program should ask the user for the number of days the employee worked during the month, validate that 
it is between 1 and 31, and then display a table showing how much the salary was for each day worked, as well as 
the total pay earned for the month. The output should be displayed in dollars with two decimal points, not in pennies

*/

#include <iostream>
#include <iomanip>

int main() {

    double startingPay {0.01}, total;
    int doubling {2};
    int daysWorked;

    std::cout << "How many days this month did you work?: ";

    while(!(std::cin >> daysWorked) || (daysWorked < 1) || (daysWorked > 31)){
        std::cout << "Input must be greater than 1 and less than 31, please re-input: ";
        std::cin.clear();
        std::cin.ignore(1200, '\n');
    }

    std::cout << std::endl;
    std::cout << "   Days               Salary" << std::endl;
    std::cout << std::fixed << std::setprecision(2);

    for(int i{1}; i < daysWorked; ++i){
        total += startingPay;
        std::cout << "    " << i << "                 $" << startingPay << std::endl;
        startingPay *= doubling;
    }

    std::cout << "The total amount acured for " << daysWorked << " days worked " 
        << "is $" << total << std::endl;

    return 0;
}