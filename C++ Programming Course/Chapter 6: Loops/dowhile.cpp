#include <iostream>

int main() {
    const unsigned int COUNT {10};
    unsigned int i {11};

    // runs body of code and then checks the test 

    do{
        std::cout << "[" << i << "] : I Love C++" << std::endl;
        ++i;
    }while (i < COUNT);
    
    return 0;
}