#include <stdio.h>
#include <stdlib.h>
int main(void){
    int integer = 514;
    int *pinteger = &integer;

    printf("The value of the integer is: %d\n", integer);
    printf("and its address is at %p\n\n", &integer);

    printf("the value of the pointer of the integer is %p\n", pinteger);
    printf("and its adress is %p\n", &pinteger);
    printf("Its size is %d\n", sizeof(pinteger));
    printf("It is pointing to %d", *pinteger);


    return 0;
}