#include <iostream> 

int main() {

    /*

    {
        int local_scope_var {33}
        int *local_ptr_var = new int;
    }

    life time of local_scope_var dies once you reach out of 
    the scope

    life time of *local_ptr_var does not die 
    */

   // dynamically allocate space for a single int, this mem belongs to the program 
   int *pNumber{nullptr};
   pNumber = new int; // OS allocated to the heap until you explicitly return memory to the sytem 

   *pNumber = 77; // stores 77 into the allocated memory 

   std::cout << "Dynamically allocating memory: " << std::endl;
   std::cout << "*pNumber: " << *pNumber << std::endl; // derefrencing 

   delete pNumber;
   pNumber = nullptr; // deletes the memory and defaults the pointer to nullptr

   // initialize with new upon decleration
   int *pNumber2{new int {23}}; // dumb down syntax ---  int *Pointer{Make memory with address and store{number}}

   std::cout << std::endl;
   std::cout << "pNumber2: " << pNumber2 << std::endl; // outputs memory address
   std::cout << "pNumber2: " << *pNumber2 << std::endl; // outputs 23

    delete pNumber2; 
    pNumber2 = nullptr;

    return 0;
}