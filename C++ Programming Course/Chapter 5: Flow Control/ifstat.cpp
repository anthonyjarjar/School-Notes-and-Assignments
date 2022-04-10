#include <iostream>

int main(){

    int num1{55}, num2{60};

    bool result = (num1 < num2);
    std::cout << std::boolalpha << "Result: " << result << std::endl;

    // free standing if statement

    if(result){
        std::cout << num1 << " is less than " << num2 << std::endl;
    }

    if(!(result)){
        std::cout << num1 << " is not less than " << num2 << std::endl;
    }

    // else clause 

    if(result){
        std::cout << num1 << " is less than " << num2 << std::endl;
    }else{
        std::cout << num1 << " is not less than " << num2 << std::endl;
    }

    // using condition in the expression 

    if(num1 < num2){
        std::cout << num1 << " is less than " << num2 << std::endl;
    }else{
        std::cout << num1 << " is not less than " << num2 << std::endl;
    }

    std::cout << std::endl;

    /*

    Nested if statements 

    */

    bool red{false}, green{true}, yellow{false}, policeStop{true};

    if(red){
        std::cout << "Stop" << std::endl;
    }
    if(yellow){
        std::cout << "Slow down" << std::endl;
    }
    if(green){
        if(policeStop){
            std::cout << "Stop" << std::endl;
        }else{
            std::cout << "GO" << std::endl;
        }
    }

    // nesting alternatives 

    std::cout << std::endl;
    
    if(green && !policeStop){
        std::cout << "GO" << std::endl;
    }else{
        std::cout << "Stop" << std::endl;
    }

    return 0;
}
