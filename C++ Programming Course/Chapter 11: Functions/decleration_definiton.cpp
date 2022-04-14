#include <iostream> 

// function decleration or function header or prototype 
int max(int a, int b); // have to call before main function 

// declaring and defining a function before main function 
// doubles as a prototype and defintion 

int main(){

    int a{3}, b{5};

    std::cout << "This is a: " << std::endl;
    std::cout << "This is b: " << std::endl;

    std::cout << "The bigger number is: " << max(a, b) << std::endl;
    return 0;
}


//Function defintion or implementation
int max(int a, int b){
    if(a > b)
        return a;
    else 
        return b;
}