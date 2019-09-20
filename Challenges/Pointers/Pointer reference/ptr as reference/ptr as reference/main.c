//
//  main.c
//  ptr as reference
//
//  Created by Jaehyung Lee on 2019-09-18.
//  Copyright © 2019 Jaehyung Lee. All rights reserved.
//

#include <stdio.h>

void squareNum(int *);
int main(int argc, const char * argv[]) {
    int num;
    
    printf("Enter a number you want to square: ");
    scanf("%d", &num);
    squareNum(&num);
    
    printf("The squared number is %d\n", num);
    return 0;
}

void squareNum(int * numptr){
    *numptr = *numptr * *numptr;
}
