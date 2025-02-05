#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>

const int width = 20 ; 
const int height = 11 ;

void setup(char board [height][width]){
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            board[i][j] = '#' ;
        }
               
    }

};

void drawBoard(char board [height][width]){
    for(int i = 0 ; i < height ; i++){
        for (int j = 0; j < width; j++)
        {
            std::cout << board[i][j] ;
        }
        std::cout << std::endl ;
    }
};

void input();
void logic();
bool gameOver = FALSE ;

int main(){
    char board [height][width] ;
    while (!gameOver)
    {
        setup(board);
        drawBoard(board);
        
        gameOver = TRUE ;
    }
    
    return 0 ;
}