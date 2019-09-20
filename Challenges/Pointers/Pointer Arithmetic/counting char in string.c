#include <stdio.h>
#include <stdlib.h>


int LengthOfString(char * strptr);
int main(void){
    char string[100];

    scanf("%s", string);

    printf("%d is the length of the string", LengthOfString(string));


    return 0;
}

int LengthOfString(char *strptr){
   int length = 0;

    while (*strptr != '\0'){
        strptr++;
        length++;
    }

    return length;
}