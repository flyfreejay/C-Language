/*
    Date: 01/06/2019
    Author: Jay Lee
    Version: 1.0
    Purpose: average and total rain calculator.
*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MONTHS 12
#define YEARS 5

int main(){
    int a,b;
    int sum = 0;
    
    
    int monthlySum =0;
    int yearIndex = 0;
    int currentMonth = 1;
    int monthIndex = 0;
    int yearlyAverage =0;
    float yearTotals[5]={0};
    float monthlyAverages[12] = {0};
    float rain[YEARS][MONTHS] =
        {
            {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
            {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
            {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
            {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
            {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
        };

    //going through the years
    for (a = 0; a< 5; a++){
        monthlySum = 0;
        for (b = 0; b<12; b++){
            //finding sum of the monthly rain falls for 'a' year
            monthlySum += rain[a][b];
            printf("%0.1f\t", rain[a][b]);

            
        }
        //totalling them in the yearTotal array 
        yearTotals[yearIndex] = monthlySum;
        yearIndex++;    //increase the index key to move to next year
    }


    //Find the yearly average
    for (int i =0; i<5; i++){
        sum += yearTotals[i];
        
    }
    yearlyAverage = (float)sum/5;
    printf("\n%0.1f",yearlyAverage);










    return 0;
}