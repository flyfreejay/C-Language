/*
    Date: 01/06/2019
    Author: Jay Lee
    Version: 1.0
    Purpose: to find the prime numbers from 3 to 100
*/
#include <stdio.h>
#include <stdbool.h>


int main(){
    //VARIABLES
    int primes[50] = {0};
    int p, i;
    int primeIndex = 2;
    bool isPrime;


    primes[0] = 2;
    primes[1] = 3;
    for (p =5; p < 101; p += 2){
        isPrime = true; 
        for (i = 0; i < primeIndex; i++){
            if(p%primes[i] == 0){
                isPrime = false;
                break;  
            }
        }
        if (isPrime){
            primes[primeIndex] = p;
            primeIndex++;
        }
    }

    for (i = 0; i< primeIndex; i++){
        printf("%d ", primes[i]);
    }




    return 0;
}
