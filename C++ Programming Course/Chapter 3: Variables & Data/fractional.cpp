#include <iostream>
#include <iomanip>

int main(){

    float number1 {1.12345678901234567890f}; // float has a precision of 7
    double number2 {1.12345678901234567890}; // double has a precision of 15
    long double number3 {1.12345678901234567890L}; // long double has a precision of >double

    std::cout << "Sizeof float: " << sizeof(float) << std::endl;
    std::cout << "Sizeof double: " << sizeof(double) << std::endl;
    std::cout << "Sizeof long double: " << sizeof(long double) << std::endl;

    std::cout << std::setprecision(20); // set precision controls the precision from std::cout
    std::cout << "Number1 is: " << number1 << std::endl; // 7 digits 
    std::cout << "Number1 is: " << number2 << std::endl; // 15'ish digits
    std::cout << "Number1 is: " << number3 << std::endl; // 15+ digits

    double number4 {5.6};
    double number5 { };
    double number6 { };

    
    // dealing with infinity 
    double result {number4 / number5};
    
    std::cout << number4 << " / " << number5 << " yeilds " << result << std::endl;
    std::cout << result << " + " << number4 << " yeilds " << result + number4 << std::endl;

    // dealing wity NaN
    result = number5 / number6;
    std::cout << number5 << " / " << number6 << " = " << result << std::endl;   
    
    return 0;
}