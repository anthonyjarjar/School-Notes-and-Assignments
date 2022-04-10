#include <iostream>

/*

int functionName (param1. param2, ...){
    opertations
    return int
}

resultVar = functionName (arg1, arg2)

*/

void enterBar(int age){
    if(age > 18){
        std::cout << "You're of age please proceed." << std::endl;
    }else{
        std::cout << "Sorry, you're not of age." << std::endl;
    }
}

int max(int a, int b){
    if(a>b)
        return a;
    else 
        return b;
}

void sayHello(){
    std::cout << "Hello There" << std::endl;
}

// functions won't manipulate orginal variables as they will make copies 
// of data in their scope


int main() {

    enterBar(19);
    std::cout << max(19, 24) << std::endl;
    sayHello();

    return 0;
}