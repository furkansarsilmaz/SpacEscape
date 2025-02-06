#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>

const int width = 19 ; 
const int height = 11 ;
const int boardWidth = width + 2 ;
const int boardheight = height + 2 ;
int playerX =  width / 2  + 1 ;
int playerY =  height / 2  + 1 ;

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
    system("cls");
    board[playerX][playerY] = '^';
    for(int i = 0 ; i < boardheight ; i++){
        for (int j = 0; j < boardWidth; j++)
        {
            std::cout << board[i][j] ;
        }
        std::cout << std::endl ;
        
    }
};

void input(char board [boardheight][boardWidth]){
    char action = getch();
    switch (action)
    {
    case 'w':
        if(playerX > 1)
        {
            board[playerX][playerY] = ' ';
            playerX-- ;
            break;
        }
    case 's':
        if (playerX < height)
        {
            board[playerX][playerY] = ' ';
            playerX++ ;
            break;            
        }
    case 'a':
        if (playerY > 1 )
        {
            board[playerX][playerY] = ' ';
            playerY--;
            break;    
        }
    case 'd':
        if (playerY < width)
        {
            board[playerX][playerY] = ' ';
            playerY++ ;
            break;   
        }

    default:
        break;
    }
};

void logic();
bool gameOver = FALSE ;

int main(){
    char board [boardheight][boardWidth] ;
    setup(board);
    while (!gameOver)
    {
        drawBoard(board);
        input(board);
        Sleep(50);

        
        //gameOver = TRUE ;
    }
    
    return 0 ;
}