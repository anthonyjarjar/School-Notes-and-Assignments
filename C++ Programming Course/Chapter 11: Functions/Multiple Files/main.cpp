#include <iostream>
#include "compare.h" // preprocessor

int main() {

    int maximum = max(134, 56);
    std::cout << "Max: " << maximum << std::endl;

    return 0;
}

// g++ -o myprogram file.cpp file2.cpp