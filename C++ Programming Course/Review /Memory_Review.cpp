#include <iostream>

int main() {

    // Scope - where in a program can a variable be refrenced 
    // Lifetime - how long a variable exists in memory 

    // local variables are declared within a function or block of code, their scope is limited to the 
    // end of the function or code block, and their life time is within the same constraints 

    // global variables are declared outside any function, are accessible in every scope, and their lifetime
    // is the duration of the programs runtime

    // compilers allocate memory for the code text and for the global variables (static)
    // as well as the stack, any time a function is called a portion of memory allocated for the local and return values

    // you cannot invoke any variables outside of their stack frame, even if they are alive, and once a return is called
    // stack memory is deleted and removed from the stack frame, and control is given back to the main function

    return 0;
}