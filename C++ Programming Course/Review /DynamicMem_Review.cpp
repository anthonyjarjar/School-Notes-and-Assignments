#include <iostream>

int main() {

    // dynamic memory is user allocated memory to the heap storage of memory that is left over after all other 
    // memory allocation, such as stack. This has to be managed by the developer 

    // allocating memory on the heap on c++ uses the new operator, for example 

    new int; // doing this gives no way of manipulating the value of the int at the given address, it also returns an address

    int *p = new int; // because a pointer holds an address, we can use the pointer to manipulate the data 
    // the pointer lives on the stack while the new int lives on the heap, but 'p' refers to the memory

    *p = 5; // this assigns 5 to the value allocated on the heap 

    p = new int(10); // creates a new int on the heap with the initalization of 10, and pointer 'p' now points to it
    // however the previous variable that was declared and intitialzied with the value 5 still lives on the heap, which 
    // is now considered garbage 

    // this can be done using the delete opertator 

    delete p; // this deallocates the previous space on the heap, delete frees uo what 'p' is pointing to   
    // now p points to an invalid location of memory, a dangaling pointer 

    p = new int(20); // this reassigns the p value 

    delete p;
    p = nullptr; // when deleting allocated memory, nullifying p should occur as to avoid dangaling pointers 

    return 0;
}