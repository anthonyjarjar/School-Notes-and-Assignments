#include <iostream>
#include <iomanip>

int main(){

    std::cout << "Hello\nWorld\n"; // backslash n works the same as endl but functions different

    std::cout << std::endl << "This is a flush message...\n" << std::flush;
    std::cout << std::endl;

    std::cout << "Formatted table: " << std::endl;
    std::cout << std::setfill('-'); // fills spaces with specific character 
    std::cout << std::left; // left justify data, defaults to the right
    std::cout << std::setw(20) << "Lastname" << std::setw(20) << "Firstname" << "Age" << std::endl;
    std::cout << std::setw(20) << "Jarjour" << std::setw(20) << "Anthony" << "18" << std::endl;
    std::cout << std::setw(20) << "Jarjour" << std::setw(20) << "Jonathan" << "25" << std::endl;
    // width value can also be stored in a variable, which should be chosen over indivisual setting

    std::cout << std::endl;
    std::cout << std::setfill(' ');
    std::cout << "Internal justification: " << std::endl;
    std::cout << std::right;
    std::cout << std::setw(10) << -123.15 << std::endl;
    std::cout << std::internal; // justifies the data and the sign seperatley 
    std::cout << std::setw(10) << -123.15 << std::endl;

    std::cout << std::endl;
    int posNum{24};
    int negNum{-34};

    std::cout << std::showpos; // shows the positive sign 
    std::cout << posNum << std::endl;
    std::cout << negNum << std::endl;

    std::cout << std::endl << std::noshowpos;
    double decimal {3.14159265358979323};
    std::cout << std::fixed << decimal << std::endl; // fixed fixes the spaces after the decimal 

    std::cout << std::endl;
    double a = 1.09999999999999999999;
    std::cout << std::setprecision(5); // set precision limits the decimal 
    std::cout << a << std::endl;

    std::cout << std::endl;
    double b = {12.0};
    std::cout << std::setprecision(2) << std::showpoint << b << std::endl; // show point, does what it says

    return 0;
}