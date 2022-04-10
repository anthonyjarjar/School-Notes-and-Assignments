#include <iostream>

// variable : decleration and definiton 
double weight {};
double weight {}; // cant redefine



double add(double a, double b);

int main() {

    double result = add(10,20);
    std::cout << result << std::endl;

    return 0;
}


double add(double a, double b){
    return a + b;
}

double add(double a, double b){ // this wont work because you are redefninig add function
    return a + b;
}



struct Point {
    double m_x;
    double m_y;
} 
// classes can have multiple defintions in other files unlike variables and functions

