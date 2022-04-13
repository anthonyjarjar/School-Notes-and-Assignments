#include<iostream>

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


template<typename T, size_t n>
void checkInput(T (&arr)[n], char &input){
    
    int row, column;
    std::cout << "Seperated by entering, what row and column would you like to place an X (starting with 0,0): \n";

    std::cin >> row;
    std::cin >> column;

    std::cout << std::endl;    
    
    if((arr[row][column] == '.') && (arr[row][column] != 'O') && (row <= 2) && (row >= 0) && (column <= 2) && (column >= 0)){
        arr[row][column] = input;
    }else{
        std::cout << "Invalid input" << std::endl;
        checkInput(arr, input);
    }
}


int main() {
    
    int n = 0, result= 0;
    char arr[3][3]{{'.','.','.'}, {'.','.','.'}, {'.','.','.'}};
    char input;
    printArray(arr);

    while(result < 1){
        input = 'X';

        checkInput(arr, input); // <- This call function doesn't work for some reason 
        
        printArray(arr);

        if(checkWinX(arr)){
            result++;
        }else if(checkBoard(arr)){
            result++;
        }else{
            input = 'O';
            checkInput(arr, input);

            if(checkWinO(arr)){
                result++;
            }
        }
    }

    printArray(arr);

    checkWin(arr);

    return 0;
}