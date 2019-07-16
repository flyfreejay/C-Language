#include <stdio.h>
#include <stdlib.h>

int main(void){
    int numberToPunch;
    char firstName[101];
    char lastName[101];
    
    scanf("%d", &numberToPunch);
    
    for (int i =0; i<numberToPunch; i++){
        scanf("%s", firstName);
        scanf("%s", lastName);
        
        printf("%s ", lastName);
        printf("%s\n", firstName);
        
    }
    
    return 0;
}