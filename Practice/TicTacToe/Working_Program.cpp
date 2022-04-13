#include <iostream> 


template<typename T, size_t n>
void printArray(T const(& arr)[n]){
    for(int j{}; j < n; ++j) {
        for(int i{}; i < n; ++i){
            std::cout << arr[j][i];
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}


template<typename T, size_t n>
bool checkWinX(T const(& arr)[n]){
    for(int i=0; i < n; i++)
        if(arr[i][0] == 'X' && arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2] 
        || arr[0][i] == 'X' && arr[0][i] == arr[1][i] && arr[0][i] == arr[2][i])
            return true;
        if(arr[0][0] == 'X' && arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2] 
        || arr[0][2] == 'X' && arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0])
            return true;
            
    return false;
}

template<typename T, size_t n>
bool checkWinO(T const(& arr)[n]){
    for(int i=0; i < n; i++)
        if(arr[i][0] == 'O' && arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2] 
        || arr[0][i] == 'O' && arr[0][i] == arr[1][i] && arr[0][i] == arr[2][i])
            return true;
        if(arr[0][0] == 'O' && arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2] 
        || arr[0][2] == 'O' && arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0])
            return true;

    return false;
}


template<typename T, size_t n>
bool checkBoard(T const(& arr)[n]){
    for(int j{}; j < n; ++j) {
        for(int i{}; i < n; ++i){
            if(arr[j][i] == '.'){
                return false;
            }
        }
    }
    return true;
}


template<typename T, size_t n>
void checkWin(T const(& arr)[n]){
    if(checkWinX(arr)){
        std::cout << "Congrats player X! You Win!" << std::endl;
    }else if(checkWinO(arr)){
        std::cout << "Congrats player O! You Win!" << std::endl;
    }else{
        std::cout << "It's a tie!" << std::endl;
    }
}

int main() {

    int n = 0, result= 0;
    char arr[3][3]{{'.','.','.'}, {'.','.','.'}, {'.','.','.'}};
    printArray(arr);

    while(result < 1){
        int row, column;

        std::cout << "Seperated by entering, what row and column would you like to place an X (starting with 0,0): \n";

        std::cin >> row;
        std::cin >> column;

        std::cout << std::endl;
        
        printArray(arr);

        if(checkWinX(arr)){
            result++;
        }else if(checkBoard(arr)){
            result++;
        }else{
            std::cout << "Seperated by entering, what row and column would you like to place an O (starting with 0,0): \n";

            std::cin >> row;
            std::cin >> column;

            std::cout << std::endl;

            arr[row][column] = 'O';
            printArray(arr);

            if(checkWinO(arr)){
                result++;
            }
        }
    }

    checkWin(arr);

    return 0;
}