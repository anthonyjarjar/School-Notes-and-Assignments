#include <iostream>

int main(){

    signed int value1 {10};
    signed int value2 {-300};

    // unsigned int value3 {-4} would not work 

    std::cout << "value1: " << value1 << std::endl;
    std::cout << "value2: " << value2 << std::endl;

    std::cout << "size of value1: " << sizeof(value1) << std::endl;
    std::cout << "size of value2: " << sizeof(value2) << std::endl;

    return 0;
}