#include <iostream>

int main() {

    /*

    refrences don't use derefrencing, can't be changed to refrence something else, 
    must be initliaized at decleration

    pointers must go through derefrencing, can be changed to point to somwhere else, 
    can be delcared uninitialized 

    */

   double doubleVlaue {12.34}; 

   double &refDoubleValue {doubleVlaue};

   double *ptrDoubleValue {&doubleVlaue};

   std::cout << "Double value: " << doubleVlaue << std::endl;

   std::cout << "refDoubleValue: " << refDoubleValue << std::endl; // prints out value
   std::cout << "&refDoubleValue: " << &refDoubleValue << std::endl; // prints out address 

   std::cout << "ptrDoubleValue: " << ptrDoubleValue << std::endl; // prints out address
   std::cout << "*ptrDoubleValue: " << *ptrDoubleValue << std::endl; // prints out value, derefrencing

   // writing through pointer 

   std::cout << std::endl;
   std::cout << "Writing through pointer: " << std::endl;

   *ptrDoubleValue = 15.44;
   
   std::cout << "refDoubleValue: " << refDoubleValue << std::endl; 
   std::cout << "&refDoubleValue: " << &refDoubleValue << std::endl;

   std::cout << "ptrDoubleValue: " << ptrDoubleValue << std::endl; 
   std::cout << "*ptrDoubleValue: " << *ptrDoubleValue << std::endl; 

   // writing through refrences 

   std::cout << std::endl;
   std::cout << "Writing through refrences: " << std::endl;

   refDoubleValue = 18.44;

   std::cout << "refDoubleValue: " << refDoubleValue << std::endl; 
   std::cout << "&refDoubleValue: " << &refDoubleValue << std::endl;

   std::cout << "ptrDoubleValue: " << ptrDoubleValue << std::endl; 
   std::cout << "*ptrDoubleValue: " << *ptrDoubleValue << std::endl; 

   // cant make a refrence refer to something else

   std::cout << std::endl;
   double doubleValue2 {12.34};
   std::cout << "doubleValue2: " << doubleValue2 << std::endl;

   double& refDoubleValue2 {doubleValue2};
   std::cout << "refDoubleValue2: " << refDoubleValue2 << std::endl;

   double doubleValue3 {110.23};
   std::cout << "doubleValue3: " << doubleValue3 << std::endl;
   
   std::cout << std::endl;   
   refDoubleValue2 = doubleValue3;
   std::cout << "refDoubleValue2: " << refDoubleValue2 << std::endl;
   std::cout << "doubleValue2: " << doubleValue2 << std::endl;

   refDoubleValue2 = 333.33;

   std::cout << "doubleValue2: " << doubleValue2 << std::endl;
   std::cout << "refDoubleValue2: " << refDoubleValue2 << std::endl;
   std::cout << "doubleValue3: " << doubleValue3 << std::endl;

   // refDoubleValue2 = doubleValue3 simply assigns doubleValue3's value to the variable
   // refrences are basically const pointers
   
   return 0;
}
