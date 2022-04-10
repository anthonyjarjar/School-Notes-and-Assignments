/*

Write a program that reads an initial investment balance and an interest rate, then prints the number of years 
it takes for the investment to reach one million dollars.

*/

#include <iostream>

int main() {

    double intrestRate{0.05};
    int investmentBalance{50}, goal{1000000}, years;

    std::cout << "With an investment balance of $" << investmentBalance;
    
    while (investmentBalance < goal){
        investmentBalance = investmentBalance * (1 + years * intrestRate);
        std::cout << investmentBalance << std::endl;
        ++years;
    }

    std::cout<< ", and an intrest rate of " 
        << intrestRate << " percent, it will take " << years << " years to reach $" << goal << std::endl;

    return 0;
}