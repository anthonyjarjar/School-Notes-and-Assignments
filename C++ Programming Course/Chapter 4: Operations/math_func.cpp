#include <iostream>
#include <cmath>

int main (){

    double weight {7.7};

    std::cout << "Weight rounded to floor is: " << std::floor(weight) << std::endl;   // rounds down 
    std::cout << "Weight rounded to ceil is: " << std::ceil(weight) << std::endl;    // rounds up 
    std::cout << std::endl;

    double savings {-5000};
     
    std::cout << "Abs of weight is: " << std::abs(weight) << std::endl; // absoulte value 
    std::cout << "Abs of saving is: " << std::abs(savings) << std::endl;

    double exponential = std::exp(10);
    std::cout << "The exponential of 10 is: " << exponential << std::endl; // e^10

    std::cout << "3 ^ 4 is: " << std::pow(3,4) << std::endl;
    std::cout << "9 ^ 3 is: " << std::pow(9,3) << std::endl;    

    return 0;
}