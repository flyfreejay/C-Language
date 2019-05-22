/*
    Author: Jay Lee
    Program Name: Rectange.c
    Date: May 22th, 2019
    Purpose: For udemy course challenge problem 
    and prints out perimeter and area of a rectangle
    when its side values are given as commandline arguments
*/
#include <stdio.h>

int main(int argc, char *argv[]){
    double width = atoi(argv[1]);
    double length = atoi(argv[2]);
    double area = width*length;
    double perimeter = 2*(width + length);

    printf("Area: %f\n", area);
    printf("Perimeter: %f\n", perimeter);

    return 0;
}