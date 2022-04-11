#include <iostream>


// pass by value
void work(int a) { // int a is parameter
    a = 11;
}


// pass by refrence 
void workTwo(int &a){ // creates a refrence variable as a parameter that refrences the argument 
    a = 11;
}

// pass by pointer 
void workThree(int *a){ // creates a pointer varaible as a parameter that points to the argument 
    *a = 12; // derefrence manipulation
}

int main() {

    // how arguments are passed to functions 

    // default, c++ passes by value, it copies to the parameter, however arrays decay to pointers 

    // for example 

    int x = 10; 

    // pass by value
    work(x); // x is an argument, after work is called, x is not manipulated, and evaluates to 10, even if 'a = 11'

    // pass by refrence 
    workTwo(x); // x is now manpiulated and it's value is 11 

    // pass by pointer 
    workThree(&x) // you need to pass the address of the variable or pass in a pointer, now x = 12

    return 0;
}