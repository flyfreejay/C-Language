#include <stdio.h>

int main(){
    unsigned int a = 60; //00 1111 00
    unsigned int b = 16; //00 0100 00
    int result = 0;

    result = a ^ b; //00 1011 00

    printf("value is %d", result);
    return 0;
}