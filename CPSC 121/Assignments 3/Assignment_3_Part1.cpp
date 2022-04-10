/*

1)Write a program that displays the following menu: Geometry Calculator

1. Calculate the Area of a Circle

2. Calculate the Area of a Rectangle

3. Calculate the Area of a Triangle

4. Quit

Enter your choice (1–4):

• If the user enters 1, the program should ask for the radius of the circle and then display its area. Use 3.14159 for π.

• If the user enters 2, the program should ask for the length and width of the rectangle, and then display the rectangle’s area.

• If the user enters 3, the program should ask for the length of the triangle’s base and its height, and then display its area.

• If the user enters 4, the program should end.

• Input Validation: Decide how the program should handle an illegal input for the menu choice or a negative value for any of 
the other inputs.

*/

#include <iostream>
#include <cmath>

int main() {

    int choice;

    std::cout << "Geometry Calculator: " << std::endl;
    std::cout << "1. Calculate the Area of a Circle" << std::endl;
    std::cout << "2. Calculate the Area of a Rectangle" << std::endl;
    std::cout << "3. Calculate the Area of a Square" << std::endl;
    std::cout << "4. Quit" << std::endl;

    std::cout << "Enter your choice (1-4): ";
    std::cin >> choice;

    switch(choice){
        case 1: {
            const float pi {3.14159f};
            int radius, result;

            std::cout << "What is the radius of the circle: ";
            std::cin >> radius;
            
            result = pi * (sqrt(radius));

            std::cout << "The area of the circle is " << result;
        }
        break;

        case 2: {
            int length, width;

            std::cout << "What is the length: ";
            std::cin >> length;

            std::cout << "What is the width: ";
            std::cin >> width;

            std::cout << "The area of the rectangle is: " << length * width;
        }
        break;

        case 3: {
            double base, height;
            double factor = 0.5;

            std::cout << "What is the base length: ";
            std::cin >> base;
            
            std::cout << "What is the height: ";
            std::cin >> height;

            std::cout << "The area of the triangle is: " << factor * (base * height);
        }
        break;

        case 4:{
            std::cout << "Program terminating";
        }
        break;

        default:{
            std::cout << "Invalid input, please run program again";
        }
    }

    return 0;
}