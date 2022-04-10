#include <iostream>

int main(){

    /*

    precedence: which operation to do first
    associativity: which direction or which order

    */

   int a{1}, b{2}, c{3}, d{4}, e{5}, f(2), g{5}, result;

   result = a + b * c - d/e - f + g;

   std::cout << "Result: " << result << std::endl;  

   // use () to overrule order of operations

    return 0;
}

