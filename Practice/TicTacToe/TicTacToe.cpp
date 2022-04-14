#include <iostream>

class Game {
    private:
        char arr[3][3]{{'.','.','.'}, {'.','.','.'}, {'.','.','.'}};


    public:
        void printArray(){
            for(int j{}; j < 3; ++j) {
                for(int i{}; i < 3; ++i){
                    std::cout << arr[j][i];
                }
                std::cout << std::endl;
            }
            std::cout << std::endl;
        }


        bool checkWinX(){
            for(int i=0; i < 3; i++)
                if(arr[i][0] == 'X' && arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2] 
                || arr[0][i] == 'X' && arr[0][i] == arr[1][i] && arr[0][i] == arr[2][i])
                    return true;
                if(arr[0][0] == 'X' && arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2] 
                || arr[0][2] == 'X' && arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0])
                    return true;    
        return false;
        }


        bool checkWinO(){
            for(int i=0; i < 3; i++)
                if(arr[i][0] == 'O' && arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2] 
                || arr[0][i] == 'O' && arr[0][i] == arr[1][i] && arr[0][i] == arr[2][i])
                    return true;
                if(arr[0][0] == 'O' && arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2] 
                || arr[0][2] == 'O' && arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0])
                    return true;
            return false;
        }


        bool checkBoard(){
            for(int j{}; j < 3; ++j) {
                for(int i{}; i < 3; ++i){
                    if(arr[j][i] == '.'){
                        return false;
                    }
                }
            }
            return true;
        }


        void inputValidation(char input){
            bool result;
            int row, column;
            
            do{
                printArray();
                std::cout << "Seperated by enter or return, what row and column would you like to place an " << input 
                    << " (starting with 1,1): \n";

                std::cin >> row;
                std::cin >> column;

                row -= 1;
                column -= 1;

                std::cout << std::endl;

                if(arr[row][column] == '.'){
                    arr[row][column] = input;
                    result = true;
                }else{
                    std::cout << "Invalid input: " << std::endl;
                }
            }while(!result);
        }


        void playGame(){
            while(true){
                
                char inputX = 'X';
                inputValidation(inputX);

                if(checkWinX()){
                    std::cout << "Congrats player X: You win!" << std::endl;
                    printArray();
                    break;
                }else if(checkBoard()){
                    std::cout << "Whoops! It's a tie!" << std::endl;
                    printArray();
                    break;
                }else{
                    char inputO = 'O';
                    inputValidation(inputO);

                    if(checkWinO()){
                        std::cout << "Congrats Player O: You win!"<< std::endl;
                        printArray();
                        break;
                    }
                }
            }
        }
};


int main() {

    Game tictactoe = Game();

    tictactoe.playGame();

    return 0;
}
