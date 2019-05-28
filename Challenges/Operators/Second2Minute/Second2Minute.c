/*
    Date: 27/05/2019
    Author: Jay Lee
    Version: 1.0
    Purpose: To convert Minutes to seconds or other timing digits
*/
#include <stdio.h>

//VARIABLES


int main(){
    int seconds;
    int minutes;
    double years;
    double hours;
    double days;

    printf("Please Enter the number of minutes: ");
    scanf("%d", &minutes);

    hours = minutes/60;
    days = minutes/(60*24.0);
    years = (minutes/(60*24*365.0));

    printf("\n%d is approximately %f days and %f years", minutes, days, years);
    return 0;
}
