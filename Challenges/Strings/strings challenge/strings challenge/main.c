//
//  main.c
//  strings challenge
//
//  Created by Jaehyung Lee on 2019-09-25.
//  Copyright © 2019 Jaehyung Lee. All rights reserved.
//

#include <stdio.h>

int string_length(const char string[]);

int main(int argc, const char * argv[]) {
    
    char herName[] = "Kim Sol In";
    
    printf("The length of her name is: %s", string_length(herName));
    
    return 0;
}

int string_length(const char string[]){
    int length = 0;
    
    char* pString;
    pString = string;
    
    while(*pString != '\0'){
        length++;
    }
    
    return length;
}
