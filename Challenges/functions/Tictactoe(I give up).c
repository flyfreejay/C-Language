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
char board[10]={'0','1','2','3','4',
                '5','6','7','8','9'};
bool player1win = false;
bool player2win = false;

int currentTurn = 1; //a positive or negative integer to keep track of turns

void checkForWin();
void drawBoard();
bool tie = false;
bool checkValidity(int n);
bool checkFullBoard();
char fillInBoard();


int main(){
    while (!player1win || !player2win || tie){
        int input;
        drawBoard();        //display the board
        //to display which turn it is rn
        if (currentTurn == 1){
            printf("\nPlayer 1's turn: ");
        }
        else{
            printf("\nPlayer 2's turn: ");
        }  
        scanf("%d", &input);                        //get the userinput
        if (checkValidity(input)){                  //run the checking for validity funciton to check if the place is already taken
            if (checkFullBoard()){                 //run checking full board function to see if the board is full
                tie = true;
            }
            else {
                board[input] = fillInBoard();       //if clear apply the user choice to the board
                currentTurn = -1*currentTurn;       //change turn
               
            }
        }
        checkForWin();
        if (player1win){
            drawBoard();
            printf("\nPlayer 1 Wins!\n");
            return 0;
        }
        else if (player2win){
            drawBoard();
            printf("\nPlayer 2 Wins!\n");
            return 0;
        }
        else if(tie){
            drawBoard();
            printf("\nTIE!\n");
            return 0;
        }
        
        
    }
    
}

char fillInBoard(){
    if (currentTurn == 1){
        return 'x';
    }
    else{
        return 'o';
    }

    
}
bool checkValidity(int n){
    if ((board[n] == 'x') || (board[n] == 'o')){
        return false;
    }
    else if((n > 9) || (n < 1)){
        return false;
    }
    else{
        return true;
    }
}
bool checkFullBoard(){
    int numCount = 0;
    bool isFull = true;
    //iterate through each element in the board
    for (int i = 1; i <= 9; i++){
        printf("%c\t", board[i]);
        if ((board[i] != 'x' ) || (board[i] != 'o' )){
            isFull = false;
            
        }
    
    
    }
   if (isFull){
       return true;
   }
   else{
       return false;
   }
}

void checkForWin(){
    //check for any wins in the rows
    for (int r = 1; r<= 7; r+=3){
        if ((board[r] == board[r+1]) && (board[r+1] == board[r+2]) ){
            if (board[r] == 'x'){
                player1win = true;
                break;
                return;
            }
            else{
                player2win = true;
                break;
                return;
            }
            
            
        }
    }
    //check for any wins in columboard[5]
    for (int c = 7; c<=9; c++){
        if ((board[c] == board[c-3]) && (board[c-3] == board[c-6])){
            if (board[c] == 'x'){
                player1win = true;
            }
            else{
                player2win = true;
            }
            break;
            return;
        }
    }
    //check for right diagnals
    if ((board[9] == board[5]) && (board[5] == board[1])){
        if (board[9] == 'x'){
            player1win = true;
        }
        else{
            player2win = true;
        }
        return;
    }
    //check for left diagnal
    else if ((board[7] == board[5]) && (board[5] == board[3])){
        if (board[7] == 'x'){
            player1win = true;
        }
        else{
            player2win = true;
        }
        return;
    }
   

}


void drawBoard(){
    //clear screen
    
    for (int c = 0; c< 10; c++){
        printf("\n");
    }
    printf("\nWelcome to Jay's Tic Tac Toe!\n");

    printf("\nPlayer1 (x)\tPlayer2(o)\n");

    printf("\t   |   |   \n");
    printf("\t %c | %c | %c \n", board[7], board[8],board[9]);
    printf("\t   |   |   \n");
    printf("\t-----------\n");
    printf("\t   |   |   \n");
    printf("\t %c | %c | %c \n", board[4], board[5],board[6]);
    printf("\t   |   |   \n");
    printf("\t-----------\n");
    printf("\t   |   |   \n");
    printf("\t %c | %c | %c \n", board[1], board[2],board[3]);
    printf("\t   |   |   \n");


}