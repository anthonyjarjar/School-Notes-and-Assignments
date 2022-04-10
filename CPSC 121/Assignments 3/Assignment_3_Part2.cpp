/*

The speed of sound varies depending on the medium through which it travels. In general, 
sound travels fastest in rigid media, such as steel, slower in liquid media, such as water, 
and slowest of all in gases, such as air. The following table shows the approximate speed of 
sound, measured in feet per second, in air, water, and steel.

Medium Speed (feet per sec)

Air 1,100

Water 4,900

Steel 16,400

Write a program that displays a menu allowing the user to select air, water, or steel. 
After the user has made a selection, the number of feet a sound wave will travel in the 
selected medium should be entered. The program will then display the amount of time it 
will take. (Round the answer to four decimal places.)

• Input Validation: Decide how the program should handle an illegal input for the menu 
choice or a negative value for the distance.

*/

#include <iostream>

int main() {
    
    int choice;
    double feet;

    std::cout << "This program determines how many seconds air waves will travel throught mediums. ";
    std::cout << "How many feet are you traveling: ";
    std::cin >> feet;

    std::cout << "What medium are you travelling through: " << std::endl;

    std::cout << "1. Air" << std::endl;
    std::cout << "2. Water" << std::endl;
    std::cout << "3. Steel" << std::endl;

    std::cout << "Enter your choice now: ";
    std::cin >> choice;

    switch(choice){
        case 1:{
            const double air{1100};

            std::cout << "It will take " << feet / air << " seconds" << std::endl;
        }
        break;

        case 2:{
            const double water{4900};

            std::cout <<"It will take " << feet / water << " seconds" << std::endl;
        }
        break;

        case 3:{
            const double steel{16400};

            std::cout << "It will take " << feet / steel << " seconds" << std::endl;
        }
        break;

        default:{
            std::cout << "Invalid input, please rerun the program: " << std::endl;
        }
    }

    return 0;
}