#include <iostream>

int main(){
    
    // addition 
    int number1{2};
    int number2{7};

    int result = number1 + number2;
    std::cout << "Addition Result: " << result << std::endl;

    // subtraction 
    result = number1 - number2;
    std::cout << "Subtractoin Result: " << result << std::endl;

    // multiplucation 
    result = number1 * number2;
    std::cout << "Multiplication Result: " << result << std::endl;

    // division 
    result = number2 / number1;
    std::cout << "Division Result: " << result << std::endl;

    // modulus 
    result = number2 % number1;
    std::cout << "Modulus Result: " << result << std::endl;

    return 0;
}