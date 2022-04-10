#include <iostream>

int main() {

    std::string fullName; // Empty string
    std::string planet {"Earth. Where the sky is blue."}; // string literal initilization 
    std::string preferedPlanet {planet}; // initialize with existing string
    std::string message {"Hello there", 5}; // contains hello, first 5 characters
    
    std::string weirdMessage(4, 'e'); // contains e, 4 times

    std::string greeting {"Hello world"};
    std::string sayingHello {greeting,6,5}; // contains existing string, starts at 6 and contains 5 characters

    std::cout << "Full Name: " << fullName << std::endl;
    std::cout << "Planet: " << planet << std::endl;
    std::cout << "Prefered planet: " << preferedPlanet << std::endl;
    std::cout << "Message: " << message << std::endl;
    std::cout << "Weird message: " << weirdMessage << std::endl;
    std::cout << "Greeting: " << greeting << std::endl;
    std::cout << "Saying hello: " << sayingHello << std::endl;
    
    return 0;
}