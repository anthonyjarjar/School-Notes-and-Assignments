#include <iostream>

int main() {

    size_t size{10};

    double *pSalaries{new double[size]}; // array will contain garbage values
    int *pStudents{new(std::nothrow) int[size]{}}; // all values will initalize to 0
    double *pScores{new(std::nothrow) double[size]{1,2,3,4,5}};

    // nullptr check
    if(pScores){
        for(size_t i{}; i < size; ++i){
            std::cout << "value " << pScores[i] << ": " << *(pScores + i) << std::endl; 
            // *pointer points to the first element in the array
        }
    }

    delete[] pScores;
    pScores = nullptr;

    return 0;
}