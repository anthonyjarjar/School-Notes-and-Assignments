#include <iostream>
#include <cctype>
#include <cstring>

int main() {

    // std::strlen finds the length of a string
    const char message1[] {"The sky is blue."};

    // array decays into a pointer 
    const char *message2 {"The sky is blue."};
    std::cout << "Message 1: " << message1 << std::endl;

    // strlen ignores null character \0
    std::cout << "String length: " << strlen(message1) << std::endl;

    // includes the null character 
    std::cout << "Size of: " << sizeof(message1) << std::endl;

    // strlen with decayed arrays 
    std::cout << "String length: " << std::strlen(message2) << std::endl;

    // prints size of pointer
    std::cout << "Size of: " << sizeof(message2) << std::endl;

    //---------------------------------------------------------//

    // std::strcmp, compares the lexicographical order of strings
    // will return - number if LHS appears before RHS

    std::cout << std::endl;
    std::cout << "Comparing LHS to RHS: " << std::endl;

    const char *stringData1 {"Alabama"};
    const char *stringData2 {"Bmabama"};

    std::cout << "std::strcmp( " << stringData1 << ", " << stringData2 << " ): " 
    << std::strcmp(stringData1, stringData2) << std::endl;

    // std::strncmp
    size_t n{8};

    std::cout << "std::strcmp( " << stringData1 << ", " << stringData2 << " ): " 
    << std::strncmp(stringData1, stringData2, n) << std::endl;

    //---------------------------------------------------------//

    std::cout << std::endl;
    std::cout << "std::strchr: " << std::endl;

    const char *str{"Try not. Do. or do no. There is no try."};
    char target = 'T';
    const char *result = str;
    int iterations{};

    while((result = std::strchr(result, target)) != nullptr){
        std::cout << "Found '" << target << "' starting at '" 
        << result << "'\n";

        ++result;
        ++iterations;
    }
    std::cout << "iterations: " << iterations << std::endl;

    //---------------------------------------------------------//

    // last occurence 
    std::cout << std::endl;
    std::cout << "std::strrchr: " << std::endl;

    char input[] = "/home/user/hello.cpp";
    char *output = std::strrchr(input, '/');
    if(output)
        std::cout << output + 1 << std::endl;

    return 0;
}