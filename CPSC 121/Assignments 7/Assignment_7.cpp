/*

Write a program that dynamically allocates an array large enough to hold a user-defined number of test scores. 
Once all the scores are entered, the array should be passed to a function that sorts them in ascending order. 
Another function should be called that calculates the average score. The program should display the sorted list 
of scores and averages with appropriate headings. Use pointer notation rather than array notation whenever possible.

Input Validation: Do not accept negative numbers for test scores.

*/

#include <iostream>

void sortTest(int *& intArr, int arrSize) {
    int temp;

    for (int i = 0; i < arrSize; i++) {
        for (int j = 1 + i; j < arrSize; j++) {
            if (*&intArr[i] > *&intArr[j]) {
                temp = *&intArr[i];
                *&intArr[i] = *&intArr[j];
                *&intArr[j] = temp;
            }
        }
    }

    std::cout << std::endl;
    std::cout << "Scores sorted from lowest to highest: " << std::endl;    
    for (int i = 0; i < arrSize; i++) {
        std::cout << *&intArr[i] << " ";
    }
    std::cout << std::endl;
}


void averageScores(int *& intArr, double arrSize) {
    double sum, average;

    for(int i = 0; i < arrSize; ++i){
        sum = *(intArr + i) + sum;
    }

    average = sum / arrSize;

    std::cout << "The average score was a: " << average << std::endl;
 
}


int main() {
    double size;
    
    std::cout << "How many test were taken: ";
    std::cin >> size;
    std::cout << std::endl;

    int *testScores{new(std::nothrow) int[size]{}};

    for(int i{}; i < size; ++i){
        std::cout << "Enter the test scores: ";
        std::cin >> *(testScores + i);
    }

    sortTest(testScores, size);
    std::cout << std::endl;
    averageScores(testScores, size);

    delete[] testScores;

    return 0;
}