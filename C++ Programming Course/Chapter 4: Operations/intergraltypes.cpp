#include <iostream> 

int main(){

    short int var1 {10}; // 2 bytes
    short int var2 {20}; 

    char var3 {30};
    char var4 {40}; // 1 byte

    auto result = var1 + var2;
    auto result2 = var3 + var4;

    std::cout << "Size of var1 " << sizeof(result) << std::endl;
    std::cout << "Size of var2 " << sizeof(result2) << std::endl;

    return 0;
}