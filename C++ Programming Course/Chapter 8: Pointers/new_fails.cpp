#include <iostream>

int main() {

    // new does not fail often, very rarely does it fail

    int *fail {new int[1000000000000000000000]}; // may give an error about exceeding array size

    // this loop will exhaust the memory capabilites of the system 
    for (size_t i{}; i < 100000000, ++i){
        int *fail2 {new int[10000000]};
    }

    // ways to avoid, exception mechanism, std::nothrow setting

    for (size_t i{}; i < 100000000; ++i){
        try{
            int *fail3 {new int[10000000]};
        }catch(std::exception& ex){ // handles failure 
            std::cout << "Failure" << ex.what() << std::endl;
        }
    }

    return 0;
}