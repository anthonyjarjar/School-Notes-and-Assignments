#include <iostream>

int main() { 

    int numbers[] {1,2,3,4,5,6,7,8,9,0};

    std::cout << "Numbers[12]: " << numbers[12] << std::endl; // reading outside the bounds 

    numbers[12] = 1000;
    std::cout << "Numbers[12]: " << numbers[12] << std::endl;

    return 0;
}
