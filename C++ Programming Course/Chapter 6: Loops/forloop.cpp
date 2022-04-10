#include <iostream>

int main() {

    const size_t COUNT {10};
    
    for(size_t i{0}; i < COUNT; ++i){
        std::cout << "i: " << i <<"\n Double that you get: " << 2*i << std::endl;
    }

    return 0;
}