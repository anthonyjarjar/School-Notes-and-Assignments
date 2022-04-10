#include <iostream>

int main() { 

    // declaring an array 
    int scores[10]; // an array storing 10 integers 

    std::cout << std::endl;
    std::cout << "Writing data in an array with a loop: " << std::endl;

    // writing data
    for(size_t i{0}; i < 10; ++i){
        scores[i] = i *3;
    }
    
    // read data
    for (size_t i{0}; i < 10; ++i){
        std::cout << "scores[" << i << "]: " << scores[i] << std::endl;
    }

    // initalize array at decleration 
    std::cout << std::endl;
    double salaries[5] {12.7, 7.5, 13.2, 8.1, 9.3};

     for (size_t i{0}; i < 5; ++i){
        std::cout << "salaries[" << i << "]: " << salaries[i] << std::endl;
    }


    // failure to initalize all elements in an array creats zeros for all other elemets
    std::cout << std::endl;
    int families[5] {12, 7, 5};

     for (size_t i{0}; i < 5; ++i){
        std::cout << "families[" << i << "]: " << families[i] << std::endl;
    }

    // omitting the size of the array at decleration 
    std::cout << std::endl;
    int class_sizes[] {10,12,15,11,18,17};

    for(auto value : class_sizes){
        std::cout << "Value: " << value << std::endl;
    }

    // sum up scores of an array
    std::cout << std::endl;
    int sum {0};
    
    for (int element : scores){
        sum += element;
    }
    std::cout << "Score sum: " << sum << std::endl;

    return 0;
}
