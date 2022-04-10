/*

1) A bag of cookies holds 30 cookies. The calorie information on the bag claims that there are 10 “servings” 
in the bag and that a serving equals 240 calories. Write a program that asks the user to input how many cookies 
they actually ate and then reports how many total calories were consumed.

*/

#include <iostream>

int main() {

    const int bagServings {10};
    const int servingCalories {240};
    int caloriesPerCookie = servingCalories/bagServings;
    int cookiesEaten{};

    std::cout << "How many cookies were eaten: ";
    std::cin >> cookiesEaten;

    std::cout << std::endl;
    std::cout << "The number of calories eaten were: " 
        << caloriesPerCookie * cookiesEaten << std::endl;

    return 0;
}