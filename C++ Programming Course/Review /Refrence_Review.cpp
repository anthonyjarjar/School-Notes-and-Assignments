#include <iostream>

void work(int x){

}

void newWork(int &x){
    x++; 
}

void swap(int &x, int &y){
    int temp = x; // stores the value x into temp to save x 
    x = y;  // stores the value y into x 
    y = temp; // stores the previous value of x into y using temp

    // this swaps the two varaibles and modifies the passed variables 
}

int main() {

    // in c++, when we assign a value to a variable, we are allocating memory that holds that 
    // value and calling it the variable name

    // for examplle we can create a variable 'a' and assign a numerical value to it, 5

    int a = 5;

    // a refrence variable refers to place in memory that contains that vlalue, and therefore creates a refrence
    // in that newly assigned space of memory

    // for example we can create a refrence variable 'b' and assign it variable 'a', using &

    int &b = a;

    // now both 'b' and 'a' are equal to 5 and can be used in any c++ operation that uses integers

    // for example 

    std::cout << b + 5 << " is equal to " << a + 5 << std::endl;

    // most common use, is passing them to functions, refer to 'work' for further explanation 

    work(a);

    // when we pass the value 'a' it gets passed to the function work and gets copied into the variable x
    // this is not optimal when working with big amounts of data, so we can pass it by refrence

    // refer to 'newWork' for further explanation

    // setting the paramter variable to a refrence, creates a variable 'x', that refers to the memory assigned to 
    // the variable 'a'

    newWork(a);

    // this function will now add 1 to the memory location of 'a', this saves loads of memory 

    std::cout << a << std::endl; // will output 6

    // we can use swapng algorhtims using refrences, when we wouldn't be able to before with normal variables

    // see swap for further explanation

    int c = 8

    swap(c, a); // makes c = 6, and a = 8

    // Things to watch out for:

    int f = 10;
    int &g = f;
    
    int h = 20;

    // you cannot reassign refrence varibles to other variables, 
    // for exmaple, the variable 'g' referes to 'f', doing 

    g = h; 

    // does not reassign the refrence variable, it assigns the value of 'h' to the variable 'f'
    // so now 

    std::cout << f; // outputs 20


    return 0;
}




