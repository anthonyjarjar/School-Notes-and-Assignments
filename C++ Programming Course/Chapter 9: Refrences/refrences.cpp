#include <iostream>

int main() {

    int value {45};
    double doubleValue{33.65};

    int& refrenceIntValue {value};
    double& refrenceDoubleValue {doubleValue};

    std::cout << "value: " << value << std::endl;
    std::cout << "double value: " << doubleValue << std::endl;

    std::cout << "refrence to value: " << refrenceIntValue << std::endl;
    std::cout << "refrence to double value: " << refrenceDoubleValue << std::endl;

    std::cout << "&value: " << &value << std::endl;
    std::cout << "&doubleValue: " << &doubleValue << std::endl;
 
    std::cout << "&refrenceIntValue: " << &refrenceIntValue << std::endl;
    std::cout << "&refrenceDoubleValue: " << &refrenceDoubleValue << std::endl;

    std::cout << "Size of (int): " << sizeof(int) << std::endl;
    std::cout << "Size of (&int): " << sizeof(int&) << std::endl;
    std::cout << "Size of (refrenceIntValue): " << sizeof(refrenceIntValue) << std::endl;

    // reassigning to the non refrenced values changes the refrence variable
    // and manipulating the data using the refrence variable changes the non refrences 
    // refrences the same memory 
    
    return 0;
}