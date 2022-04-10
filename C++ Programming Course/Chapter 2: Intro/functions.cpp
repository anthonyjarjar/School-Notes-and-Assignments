#include <iostream>

/*
 
functions are templated as follows 

[return type] [function name](paramaters){
    [body]
}

*/

int addNumber(int firstParam, int secondParam){
    
    int result = firstParam + secondParam;
    return result; //return statement
}

int main(){
    
    int Number1 = 13; //statment
    int Number2 = 7;

    std::cout << "First number: " << Number1 << std::endl;
    std::cout << "Second number: " << Number2 << std::endl;

    int sum = Number1 + Number2;
    std::cout << "Sum: " << sum << std::endl;

    sum = addNumber(25,7);
    std::cout << "Sum: " << sum << std::endl;    

    sum = addNumber(30,54);
    std::cout << "Sum: " << sum << std::endl;

    std::cout << "Sum: " << addNumber(16,19) << std::endl;

    return 0;
}