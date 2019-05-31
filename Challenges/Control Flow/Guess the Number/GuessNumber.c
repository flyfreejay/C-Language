/*
    Date: 30/05/2019
    Author: Jay Lee
    Version: 1.0
    Purpose: Guess the number game
    for my understanding of loops.
*/

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(){
    //random number generator
    time_t t;
    srand((unsigned) time(&t));
    int randomNumber = rand()%21;

    //VARIABLES
    int lives = 5;
    int guess;
    _Bool win = 0;
    //Loops
    while(lives > 0){
        //Get the userinput from the user
        printf("You have %d tries left\nEnter a guess: ", lives);
        scanf("%d", &guess);

        //Logic time
        if (guess == randomNumber){
            printf("\nCongratulations! You guessed it!\n");
            break;
        }
        else if(randomNumber < guess){
            lives--;
            printf("Sorry, %d is wrong. My number is less than that\n", guess);
        }
        else{
            lives--;
            printf("Sorry, %d is wrong. My number is larger than that\n", guess);
        }
    }
    if (lives == 0){
        printf("\nAh you suck at guessing. How can someone be that bad at guessing\nThe number was %d\n", randomNumber);

    }



    return 0;
}