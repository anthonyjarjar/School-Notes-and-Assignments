#include <iostream>

int main(){

    // bools are assigned either true or false
    bool redLight {true};
    bool greenLight {false};


    if(redLight == true){
        std::cout << "Stop!" << std::endl;
    }else{
        std::cout <<"Go through!" << std::endl;
    }

    if (greenLight){
        std::cout << "The light is green!" << std::endl;
    }else{
        std::cout << "The light is NOT green!" << std::endl;
    }
    
    // the bool stores 0 or 1 and takes one byte of memory 
    std::cout << std::endl;
    std::cout << "redLight " << redLight << std::endl;
    std::cout << "greenLight " << greenLight << std::endl; 

    // printing out true or false with boolalpha
    std::cout << std::boolalpha;
    std::cout << std::endl;
    std::cout << "redLight " << redLight << std::endl;
    std::cout << "greenLight " << greenLight << std::endl; 


    return 0;
}