#include <iostream>

int main() {

    // measures to take to make sure valid address is used 

    // verbose nullptr check
    int *pNumber{}; // initialize to nullptr

    if(!(pNumber==nullptr)){
        std::cout << "Valid address: " << pNumber << std::endl;
    }else{
        std::cout << "Invalid address" << std::endl;
    }

    // compact nullptr 

    if(pNumber){
        std::cout << "Valid address: " << pNumber << std::endl;
    }else{
        std::cout << "Invalid address" << std::endl;
    }

    return 0;
}