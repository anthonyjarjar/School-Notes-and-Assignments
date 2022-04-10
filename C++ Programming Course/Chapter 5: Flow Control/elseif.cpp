#include <iostream>

const int pen{10}, marker{20}, 
eraser{30}, rectangle{40}, 
circle{50}, ellipse{60};

int main(){

    const int pen{10}, marker{20}, 
    eraser{30}, rectangle{40}, 
    circle{50}, ellipse{60};

    int tool{eraser};

    if(tool == pen){
        std::cout << "Active tool is pen" << std::endl;
    }
    else if(tool == marker){
        std::cout << "Active tool is marker" << std::endl;
    }
    else if(tool == eraser){
        std::cout << "Active tool is eraser" << std::endl;
    }
    else if(tool == rectangle){
        std::cout << "Active tool is rectangle" << std::endl;
    }
    else if(tool == circle){
        std::cout << "Active tool is circle" << std::endl;
    } 
    else if(tool == ellipse){
        std::cout << "Active tool is ellipse" << std::endl;
    }

    std::cout << "Moving on" << std::endl;

    return 0;
}