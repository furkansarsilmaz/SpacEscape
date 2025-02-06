#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>

const int width = 19 ; 
const int height = 11 ;
const int boardWidth = width + 2 ;
const int boardheight = height + 2 ;

void setup(char board [boardheight][boardWidth]){
    for (int i = 0; i < boardheight; i++)
    {
        for (int j = 0; j < boardWidth; j++)
        {
            if( i == 0 || i == boardheight - 1 || j == 0 || j == boardWidth - 1 )
            {
                board[i][j] = '#' ;
            }
            else
            {
                board[i][j] = ' ';
            }
        } 
    }

};

void drawBoard(char board [boardheight][boardWidth]){
    for(int i = 0 ; i < boardheight ; i++){
        for (int j = 0; j < boardWidth; j++)
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
    char board [boardheight][boardWidth] ;
    while (!gameOver)
    {
        const int playerX =  width / 2  + 1 ;
        const int playerY =  height / 2  + 1 ;
        setup(board);
        board[11][10] = '^';
        drawBoard(board);
        

        
        gameOver = TRUE ;
    }
    
    return 0 ;
}