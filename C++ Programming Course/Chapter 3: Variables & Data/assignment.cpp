#include <iostream>

int main(){

    int var1 {12}; // declare and intialize 
    std::cout << "var1: " << var1 << std::endl;

    var1 = 67; // you can reassign values to a variable 
    std::cout << "var1: " << var1 << std::endl;

    std::cout << std::endl;

    bool state {false};
    std::cout << std::boolalpha;
    std::cout << "The state = " << state << std::endl;

    state = true;
    std::cout << "The state is now = " << state << std::endl;

    /* 
    be careful with auto variables, for example you cannot assign a negative number 
    to an auto that was once a unsigned variable
    */

    return 0;
}