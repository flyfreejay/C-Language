/*
    Date: 11/06/2019
    Author: Jay Lee
    Version: 1.0
    Purpose: TIC TAC TOE LIKE BILL GATES
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//VARIABLES
char board[3][3]={
    {'x','o','9'},
    {'4','x','6'},
    {'1','2','x'}
};
bool player1win;
bool player2win;

bool checkForWin();
void drawBoard();
bool checkValidity();
bool checkFullBoard();

int main(){
    drawBoard();
    return 0;
}

void drawBoard(){
    //clear screen
    system("cls");
    printf("Welcome to Jay's Tic Tac Toe!\n");

    printf("\nPlayer1 (x)\tPlayer2(o)\n");

    printf("   |   |   \n");
    printf(" %c | %c | %c \n", board[0][0], board[0][1],board[0][2]);
    printf("   |   |   \n");
    printf("-----------\n");
    printf("   |   |   \n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1],board[1][2]);
    printf("   |   |   \n");
    printf("-----------\n");
    printf("   |   |   \n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1],board[2][2]);
    printf("   |   |   \n");


}