#include <iostream> 

int main() { 

    char *pCharVar {nullptr};
    char charVar {'A'};

    pCharVar = &charVar;

    std::cout << "The value stored in pCharVar is: " << *pCharVar << std::endl;

    // intializing with string literal

    // the string becomes expanded to a character array, and pMessage points to the first element
    char *pMessage {"Hello World!"}; 

    std::cout << pMessage + 1 << "\n" << *pMessage << std::endl;

    // using arrays to modify 
    char message2[] {"Hello world"};
    message2[0] = 'T';
    std::cout << "message2: " << message2 << std::endl;

    return 0;
}