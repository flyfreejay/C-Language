#include <stdio.h>
#include <string.h>


void point_collector(char cardType[], int * point);

int main(void) {
    char inputString[17];
    char clover[13];
    char spade[13];
    char heart[13];
    char diamond[13];

    int cloverPt = 0;
    int diamondPt = 0;
    int heartPt = 0;
    int spadePt = 0;
    int strIndex = 1;
    int cardIndex = 0;

    scanf("%s", inputString);
    
    while(inputString[strIndex] != 'D'){
        clover[cardIndex] = inputString[strIndex];
        strIndex++;
    }
    cardIndex = 0;
    while(inputString[strIndex] != 'H'){
        diamond[cardIndex] = inputString[strIndex];
        strIndex++;
    }
    cardIndex = 0;
    while(inputString[strIndex] != 'S'){
        heart[cardIndex] = inputString[strIndex];
        strIndex++;
    }
    while(inputString[strIndex] != '\0'){
        spade[cardIndex] = inputString[strIndex];
        
        strIndex++;
        cardIndex++;
    }
    
    point_collector(diamond, &diamondPt);
    point_collector(spade, &spadePt);
    point_collector(heart, &heartPt);
    point_collector(clover, &cloverPt);
    
    printf("Cards Dealt %20s\n", "Points");
    printf("Clubs ");
    printf("Diamonds \n");
    printf("Hearts \n");
    printf("Spades \n");
    printf("Clover \n");
    printf("                       Total %2d\n",(cloverPt+diamondPt+heartPt+spadePt));
    return 0;
}

void point_collector(char cardType[], int * point){
    int cardIndex = 0;
        while(cardType[strIndex] != '\0'){
            spade[cardIndex] = inputString[strIndex];
            if (inputString[strIndex] == 'A'){
                *point += 4;
            }
            if (inputString[strIndex] == 'K'){
                *point += 3;
            }
            if (inputString[strIndex] == 'Q'){
                *point += 2;
            }
            if (inputString[strIndex] == 'J'){
                *point += 1;
            }
            strIndex++;
        }

}