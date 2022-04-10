#include <iostream>

int main(){

    bool a{true}, b{false}, c{true};

    std::cout << std::boolalpha;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;  
    std::cout << "c: " << c << std::endl;

    std::cout << std::endl; 
    std::cout << "Basic AND opertations" << std::endl;   

    std::cout << "a && b " << (a && b) << std::endl;
    std::cout << "a && c " << (a && c) << std::endl;
    std::cout << "a && b && c " << (a && b && c) << std::endl;

    std::cout << std::endl; 
    std::cout << "Basic OR opertations" << std::endl;   

    std::cout << "a || b " << (a || b) << std::endl;
    std::cout << "a || c " << (a || c) << std::endl;
    std::cout << "a || b || c " << (a || b || c) << std::endl;

    std::cout << std::endl;
    std::cout << "Basic NOT operation" << std::endl;

    std::cout << "!a: " << !a << std::endl;
    std::cout << "!b: " << !b << std::endl;
    std::cout << "!c: " << !c << std::endl;

    std::cout << "Combining logical operators: ";
    std::cout << "!(a && b) || c: " << (!(a && b) || c) << std::endl;

    /*
    combining this with relational operators is also possible 
    such as:

    a = 1 
    b = 0 

    (a > b) && !(a == b) 
    
    */

    return 0;
}