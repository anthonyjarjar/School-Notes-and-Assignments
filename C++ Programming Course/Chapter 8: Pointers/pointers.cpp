#include <iostream>

int main() { 

    /*
    // declaring pointers
    
    int *pNumbers {}; // can only store adresses to int types
    double *pFractionalNumber {}; // can only store addresses to double types

    // explicitly initalize to nullptr, dont use pointers that contain nullptr
    
    int *pNumbers {nullptr};
    int *pFractionalNumber {nullptr}; 

    // all pointers are of the same size
    */

    // assigning data to pointer variables 
    int intVar {43};
    int* pInt{&intVar}; // & is the address of operator 

    std::cout << "intVar: " << intVar << std::endl;
    std::cout << "pInt (Address in memory): "  << pInt << std::endl;

    // you can also change the address stored in a pointer at any time
    int intVar2 {65};
    intVar2 = 126;

    pInt = &intVar2;
    std::cout << "intVar2: " << intVar2 << std::endl;
    std::cout << "pInt (with different address): " << pInt << std::endl;

    // Derefrencing a pointer:

    int* pInt2 {nullptr};
    int intData {56};
    pInt2 = &intData;

    std::cout << "Value: " << *pInt2 << std::endl;

    // You can manipulate data using pointers 

    int number = 5;
    int *p_number{&number};

    *p_number = 55;

    std::cout << number << std::endl;
    std::cout << *p_number << std::endl;
    std::cout << p_number << std::endl;

    return 0;
}