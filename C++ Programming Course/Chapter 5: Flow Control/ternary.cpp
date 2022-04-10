#include <iostream>

int main(){

    int a{35}, b{20}, max{};

    std::cout << std::endl;
    std::cout << "This is a regular if statement" << std::endl;

    // normal if statement
    if(a > b){
        max = a;
    }else{
        max = b;
    }

    std::cout << "max: " << max << std::endl;
    
    std::cout << std::endl << "We will now use ternary testing \n"; 

    // ternary testing
    max = (a > b) ? a : b;
    std::cout << "max: " << max << std::endl;

    // ternary initialization
    std::cout << std::endl;
    std::cout << "speed" << std::endl;  
    bool fast = false;

    int speed {fast ? 300 : 150};

    std::cout << "The speed is: " << speed << std::endl;

    /*

    if(condition){
        result = option1;
    }else{
        result = option2;
    }

    same as 

    result = (condition) ? option1 : option2;

    result = (true or flase) ? if true option 1 : if false option 2

    */

 
    return 0;
}