#include <iostream> 

int main() {

    // memory leaks onyl occur to dynamically allocated memory 

    int *pNumber {new int {67}}; // points to address 1

    // should dlete and reset here

    int number{55} // lives at address 2

    pNumber = &number 
    // now points to address 2, but address 1 is still being used by our program but has lost access
    // which causes a memory leak
    
    // double allocation
    int *pNumber2 {new int{55}};
    pNumber2 = new int{44}; // now leaks int{55}

    {
        int *pNumber3 {new int{57}};
    }
    // memory int{57} leaks

    return 0;
}