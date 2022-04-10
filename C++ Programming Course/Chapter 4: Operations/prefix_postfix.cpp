#include <iostream>

int main(){

    int value = 5;

    // basic increment 
    std::cout << "Value + 1" << std::endl;
    value = value + 1;
    std::cout << "The value is now: " << value << std::endl;
    std::cout << std::endl; 

    // postfix increment
    std::cout << "Value++" << std::endl;
    value = 5;
    std::cout << "The value will post fix increment: " << value++ <<std::endl; //5
    std::cout << "The value is now: " << value << std::endl; //6
    std::cout << std::endl; 

    // prefix increment 
    std::cout << "++Value" << std::endl; 
    value = 5;
    std::cout << "The value will now prefix increment: " << ++value << std::endl; //6
    std::cout << "The value is now: " << value << std::endl; //6

    return 0;
}