#include <iostream> 

int main() {

    int socres[] {10,12,15,11,18,17,22,23,24};

    std::cout << "scores size: " << std::size(socres) << std::endl;
    int count { std::size(socres)};
    
    for(size_t i{0}; i < count; ++i){
        std::cout << "scores[" << i << "] : " << socres[i] << std::endl;
    }

    // again, range based for loops solves this problem easily 
    std::cout << std::endl;
    std::cout << "Range based for loop: " << std::endl;

    for(auto score : socres){
        std::cout << "score: " << score << std::endl; 
    }

    return 0;
}