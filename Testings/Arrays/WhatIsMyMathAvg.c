#include <stdio.h>

int main(){
    int grades[10];
    int sum = 0;
    int count;
    double average =0.0f;

    int i;
    for(i =0; i< count; ++i){
        printf("%u> ", i+1);
        scanf("%d", &grades[i]);
        sum += grades[i];
    }
    average = (double)sum/count;

    printf("\nAverage is %f", average);


    return 0;
}