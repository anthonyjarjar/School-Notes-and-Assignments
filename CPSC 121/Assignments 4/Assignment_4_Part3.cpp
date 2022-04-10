/*

Write a program that uses a loop to display the characters for each ASCII code 32 through 127. Display 16 characters 
on each line with one space between characters.

*/

#include <iostream> 

int main() { 
    int n, 
        i, 
        x,
        bound = 127;

    for(i = 32; i < bound;){
        while(n < 16){
            char value{static_cast<char>(i)};
            std::cout << " " << value;
            ++i;
            ++n;
        }
        n = 0;
        std::cout << std::endl;
    }

    return 0;
}