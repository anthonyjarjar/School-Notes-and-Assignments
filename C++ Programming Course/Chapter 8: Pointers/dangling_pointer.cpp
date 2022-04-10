#include <iostream>

int main() {

    // dangaling pointer is a pointer without valid address
    // occurs when uninitialized, deleted, or multiple ptrs to same memory

    // Case 1: Uninitialized 
    int *pNumber;
    std::cout << *pNumber << std::endl; // <--- this would crash

    // Case 2: Delted 

    int *pNumber2{new int{67}};

    delete pNumber2;

    std::cout << *pNumber2 << std::endl; // <---- this would crash

    // Case 3: Multiple pointers to same address

    int *pNumber3 {new int{83}};
    int *pNumber4 {pNumber3};

    delete pNumber3;

    std::cout << pNumber4 << *pNumber4 << std::endl; // <---- this would crash

    /*

    always initalize 
    reset pointers after delete (mem = nullptr)
    make master pointer

    */

   // Solution 1:

   int *pNumber5{};
   int *pNumber6{new int{56}};

   if(pNumber6 != nullptr){
       std::cout << *pNumber6 << std::endl;
   }

   // solution 2:

   delete pNumber6;
   pNumber6 = nullptr

    return 0;
}