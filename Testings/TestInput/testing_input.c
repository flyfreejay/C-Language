/*
    Author: Jay Lee
    Purpose: to test scanf function
    Date: May 14th 2019
*/
#include <stdio.h>

int main(){

    char str[100];
    int i;
    int i2;

    scanf("%d %d %s", &i, &i2, str);

    printf("\nFirst Num entered:%d\nSecond Num entered:%d\n"
    "Last String entered:%s", i, i2, str);
    return 0;

}