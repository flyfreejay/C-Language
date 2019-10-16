#include <stdio.h>
int removeDuplicates(int*, int);
int main(void){
    int array[3] = {1,1,3};
    printf("%d", removeDuplicates(array, 3));
    return 0;
}

int removeDuplicates(int* nums, int numsSize){
    int i = 0;
    int size = 0;
    while (*(nums+i) != '\0'){
        i++;
        
        if (*(nums+i) != *(nums+i-1)){
            size++;
        }
    }
    return size;
}

