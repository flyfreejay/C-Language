#include <stdio.h>
#include <stdbool.h>
int main(void){
    char word[51];
    int count = 0;
    int i,j,k;
    int l = 0;
    char swap;
    char sameChar;
    bool wasItSame = false;
    
    scanf("%s", word);
    
    //find l
    while(word[l] != '\0'){
        l++;
    }
    
    
    //sort with bubble sort
    for(i= 0; i<l-1; i++){
        for(j=0; j<l-1; j++){
            if(word[j] > word[j+1]){
                swap = word[j];
                word[j] = word[j+1];
                word[j+1] = swap;
            }
        }
    }
    
    //find if same characters occur
    for(k = 0; k< l-1; k++){
        if(word[k] == word[k+1]){
            if(!wasItSame){
                count++;
                wasItSame = true;
            }
        }    
        else{
            wasItSame = false;
        }
        
        
    }
    
    printf("%d", count);
    return 0;
}