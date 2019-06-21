#include <stdio.h>
#include <string.h>
int main(){
    // char myString[20] = {"ralthfdls"};
    // printf("%s has length of %d\n", myString, strlen(myString));

    // char myTop[10], myJg[50];

    
    // strcpy(myJg, "The best jgler NA and successful in any ganks");
    // strncpy(myTop, myJg, sizeof(myTop)-1);
    // printf("My top is %s and my jungle is %s\n", myTop, myJg);

    char lastName[] = {"kim"};
    char firstName[] = {"sol in"};
    printf("\n%s",strcat(lastName, firstName));
    return 0;
}