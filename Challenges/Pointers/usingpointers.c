#include <stdio.h>
#include <stdlib.h>

int main(void){
    long num1 = 0L;
    long num2 = 0L;
    long *pnum = &num1;

    *pnum = 2L;
    ++num2;
    num2 += num1;

    pnum = &num2;
    ++*pnum;
    printf("num1 = %ld\tnum2 = %ld\t*pnum = %ld\t*pnum + num2 = %ld\n", num1, num2, *pnum, *pnum + num2);

    return 0;
}