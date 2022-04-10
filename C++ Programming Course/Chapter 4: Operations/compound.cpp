#include <iostream>

int main(){

    int value {50};

    std::cout << "The value is currently: " << value << std::endl;
    std::cout << std::endl;

    value += 5;
    std::cout << "The value after value += 5 is: " << value << std::endl; 
    std::cout << std::endl;

    value -= 5;
    std::cout << "The value after value -= 5 is: " << value << std::endl;   
    std::cout << std::endl;

    value *= 2;
    std::cout << "The value after value *= 2 is: " << value << std::endl;
    std::cout << std::endl;

    value /= 3; 
    std::cout << "The value after value /= 3 is: " << value << std::endl;
    std::cout << std::endl;

    value %= 5;
    std::cout << "The value after value %= 5 is: " << value << std::endl;    

    return 0;

}