#include <iostream>

const int pen{10}, marker{20}, 
eraser{30}, rectangle{40}, 
circle{50}, ellipse{60};

int main(){

    int tool{pen};

    // switch statement only uses enums and integrals

    switch(tool){
        case pen: {
            std::cout << "Active tool is pen" << std::endl;
        }
        break;

        case marker: {
            std::cout << "Active tool is marker" << std::endl;
        }
        break;

        default: {
            std::cout << "Can't match any tool" << std::endl;
        }
    }

    return 0;
}