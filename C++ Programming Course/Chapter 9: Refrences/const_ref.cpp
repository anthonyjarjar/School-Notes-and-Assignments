#include <iostream> 

int main() { 

    // non const refrence 
    std::cout << std::endl;
    std::cout << "Non const refrence: " << std::endl; 

    int age{27};
    int &refAge{age};

    std::cout << "age: " << age << std::endl;
    std::cout << "refAge: " << refAge << std::endl;

    std::cout << std::endl;
    std::cout << "Modify orginal variable through refrence: " << std::endl;
    
    refAge++;

    std::cout << "age: " << age << std::endl;
    std::cout << "refAge: " << refAge << std::endl;

    // const refrence 
    std::cout << std::endl;
    std::cout << "Const refrence: " << std::endl;
    age = 30;
    const int &constRefAge{age};

    std::cout << "age: " << age << std::endl;
    std::cout << "constRefAge: " << constRefAge << std::endl;

    /*
    constRefAge = 31; // error
    */

    return 0;
}