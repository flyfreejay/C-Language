#include <stdio.h>

int main(){
    int a = 33;
    int b = 15;
    int result = 0;

    result = a%b;
    printf("a's value before ++ operator is %d\n", a++);
    printf("now a is %d\n", a);

    return 0;

}