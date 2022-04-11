#include <iostream> 

void func(int data){

}

void funcTwo(int *data){

}

int main(){

    // "uses refrences when you can, and use pointers when you have too"

    // Before we hop into it, we need to talk about the address of operator, or '&'

    // say we want to find where the variable 'x' is located in memory 

    int x = 5;

    std::cout << &x << std::endl; // out puts something like 0x16fafb398

    // or we can save the address and use it later in code 

    int *y = &x;

    // this is the syntax for integer pointers, different from normal integers
    // so now the variable 'y' points to the address 'x'

    // so now there are two ways to show the values of variable 'x'

    std::cout << x << " and " << *y << std::endl;

    // this is called derefrencing, which is an integer
    // y = int ptr, *y = int

    // why would you want to use any of this?

    // 1)  Functions and Passing data

    func(x); // the variable 'x' gets copies to the paramter variable data
    
    funcTwo(y); // now that the func takes a pointer, the pointer data, will point to the same address as y
    // this saves  memory, and can allow the function to change the variable everywhere, cross-scope manipulation

    return 0;
}