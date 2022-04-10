#include <iostream>

int main(){

    int number1 {45};
    int number2 {60};

    std::cout << "Number 1: " << number1 << std::endl;
    std::cout << "Number 2: " << number2 << std::endl;

    std::cout << std::endl;
    std::cout << "We will now compare variables: " << std::endl;

    std::cout << std::boolalpha; // prints out true or false instead of 0 or 1 

    // stress parentheses because of precednece, operators self explanitory 
    std::cout << "Number1 < Number2: " << (number1 < number2) << std::endl; 
    std::cout << "Number1 > Number2: " << (number1 > number2) << std::endl; 
    std::cout << "Number1 <= Number2: " << (number1 <= number2) << std::endl;
    std::cout << "Number1 >= Number2: " << (number1 >= number2) << std::endl;
    std::cout << "Number1 == Number2: " << (number1 == number2) << std::endl;
    std::cout << "Number1 != Number2: " << (number1 != number2) << std::endl;
    // you can also store these values into a variable such as "bool value = (1 > 2);"

    return 0;
}