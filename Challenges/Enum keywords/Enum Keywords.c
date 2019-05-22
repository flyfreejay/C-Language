#include <stdio.h>
#include <stdlib.h>

int main(){
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, MICROSOFT} ;
    enum Company xerox = XEROX;
    enum Company google = GOOGLE;
    enum Company facebook = FACEBOOK;

    printf("value of xerox is: %d\n", xerox);
    printf("value of google is: %d\n", google);
    printf("value of facebook is: %d\n", facebook);


    return 0;
}