/*
    Date: 27/05/2019
    Author: Jay Lee
    Version: 1.0
    Purpose: to show how much space does each data type take in 
    various computer systems.
*/
#include <stdio.h>

int main(){
    printf("Variable type of char occupy: %zd\n", sizeof(char));
    printf("Variable type of int occupy: %zd\n", sizeof(int));
    printf("Variable type of short occupy: %zd\n", sizeof(short));
    printf("Variable type of long occupy: %zd\n", sizeof(long));
    printf("Variable type of long long occupy: %zd\n", sizeof(long long));
    printf("Variable type of float occupy: %zd\n", sizeof(float));
    printf("Variable type of double occupy: %zd\n", sizeof(double));
    printf("Variable type of long double occupy: %zd\n", sizeof(long double));
    

}