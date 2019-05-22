#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    int numberOfArgs = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];

    printf("Number of the arguments: %d\n", numberOfArgs);
    printf("The name of the program is: %s\n", argument1);
    printf("The 2nd argument parsed was: %s\n", argument2);
    return 0;

}
















