#include <iostream> 
#include <cctype>

int main() {

    /*

    Things to do with string data:
    
    Check for alphanumeric, alphabetical, 
    blank, lower or uppercase, a digit, 
    turning a string to lower or upper

    */


   // check if alpha numeric
   std::cout << std::endl;
   std::cout << "Checking if value is alphanumeric: " << std::endl;
   
   std::cout << "C is alphanumeric: " << std::isalnum('C') << std::endl;
   std::cout << "^ is alphanymeric: " << std::isalnum('^') << std::endl;

   char inputChar;
   std::cout << std::endl;
   std::cout << "Type in a single character: ";
   std::cin >> inputChar;

   if (std::isalnum(inputChar)){
       std::cout << inputChar << " is alphanumeric." << std::endl;
   }else{
       std::cout << inputChar << " is not alphanumeric." << std::endl;
   }

   // check if alphabetical 
   std::cout << std::endl;
   std::cout << "7 is alphabetical: " << std::isalpha('7') << std::endl;

   // checking for blanks

   std::cout << std::endl;
   std::cout << "std::isblank: " << std::endl;
   char message[]{"Hello there. How are you doing? The sun is shining."};
   std::cout << "message: " << message << std::endl;

   int blankCount{};
   for(size_t i{0}; i < std::size(message); ++i){
       if(std::isblank(message[i])){
           std::cout << "Found a blank character at index: [" << i << "]" << std::endl;
           ++blankCount;
       }
   }
   std::cout << "In total we found " << blankCount << " blank characters." << std::endl;

   // checking for upper and lower case

   int lowerCaseCount{};
   int upperCaseCount{};

   for(auto character : message){
       if(std::iswlower(character)){
           ++lowerCaseCount;
       }
       if(std::isupper(character)){
           ++upperCaseCount;
       }
   }

   std::cout << std::endl; 
   std::cout << "Found " << lowerCaseCount << " lower case characters and " 
   << upperCaseCount << " uppercase characters." << std::endl; 
   
   // changing characters into lowercase 

   std::cout << std::endl;
   char orginalSTR[]{"Anthony Micheal Jarjour"};
   char newSTR[std::size(orginalSTR)];

   std::cout << orginalSTR << std::endl;

   for(size_t i{}; i < std::size(orginalSTR); ++i){
       newSTR[i] = std::tolower(orginalSTR[i]);
   }

   std::cout << "Lowercase string: " << newSTR << std::endl;
   
   return 0;
}