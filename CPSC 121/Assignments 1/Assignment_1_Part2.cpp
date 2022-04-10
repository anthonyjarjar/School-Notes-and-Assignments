/*

2) The star player of a high school basketball team is 75 inches tall. 
Write a program to compute and display the height in feet/inches form.

Hint: Try using the modulus and integer divide operations.

*/
#include <iostream>

int main() {

    int heightInches{75};
    int inchesInFeet{12};

    std::cout << "The star basket ball players height in inches is: " << heightInches;
    std::cout << std::endl;

    std::cout << "Converted to feet/inches form is: " << std::endl;
    std::cout << heightInches/inchesInFeet << "'" << heightInches%inchesInFeet << std::endl;

    return 0;
}