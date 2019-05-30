#include <stdio.h>

int main(){
    enum Weekday {Mon, Tue, Wed, Thur, Fri, Sat, Sun};
    enum Weekday today = Fri;

    switch(today){
        case Mon:
            printf("It's Monday today");
            break;
        case Tue:
            printf("It's Tuesday today");
            break;
        case Sun:
            printf("It's Sunday today");
            break;
        default:
            printf("whatever");
            break;
    }

    return 0;
}