#include <iostream>
#include <cstring>

int main() {

    // concatenation
    std::cout << std::endl;
    std::cout << "std::strcat: " << std::endl;

    char dest[50] = "Hello ";
    char src[50] = "World!";
    std::strcat(dest, src);
    std::strcat(dest, " Goodbye World!");
    std::cout << "dest: " << dest << std::endl;
    std::cout << std::endl;

    // copying
    std::cout << std::endl;
    std::cout << "std::strcpy: " << std::endl;
    const char *source = "C++ is a multipurpose programming language.";
    char *dest2 = new char[std::strlen(source) + 1];

    std::strcpy(dest2, source);

    std::cout << "sizeof: " << sizeof(dest2) << std::endl;
    std::cout << "std::strlen: " << std::strlen(dest2) << std::endl;
    std::cout << "dest2: " << dest2 << std::endl;

    

    return 0;
}