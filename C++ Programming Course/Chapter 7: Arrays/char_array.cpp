#include <iostream> 

int main() {

    char message[5] {'H', 'e', 'l', 'l', 'o'};

    std::cout << "Message: ";
    for(auto c : message){
        std::cout << c;
    }

    // manipulating elements of the char array 

    message[1] = 'a';

    std::cout << std::endl;
    std::cout << "Message: ";
    for(auto c : message){
        std::cout << c;
    }

    // direct print out 
    std::cout << std::endl;
    char message2[6] {'H', 'e', 'l', 'l', 'o', '\0'}; // dont need null terminator if size is specified 
    std::cout << "Message: " << message2 << std::endl;

    // can also include literal c strings
    std::cout << std::endl;
    char message3[] {"Hello World!"}

    return 0;
}