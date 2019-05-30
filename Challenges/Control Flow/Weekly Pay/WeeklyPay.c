/*
    Date: 28/05/2019
    Author: Jay Lee
    Version: 1.0
    Purpose: To find the amount of weekly pay
*/
#include <stdio.h>



int main(){
    //VARIABLES
    int hoursWorked;
    int overTime;
    double grossPay;
    double netPay;
    double taxes;
    double payRate =12.0;

    printf("Please enter the hours you worked this week: ");
    scanf("%d", &hoursWorked);

    //calculate the grosspay
    if (hoursWorked <= 40){
        grossPay = hoursWorked*payRate;
    }
    else {
        overTime = hoursWorked - 40;
        grossPay = 40*payRate+overTime*(payRate*1.5);
    }

    //calculate taxes
    if (grossPay <= 300){
        taxes = grossPay * 0.15;
    }
    else if (grossPay <= 450){
        taxes = (grossPay-300)*0.2 + 300*0.15;
    }
    else {
        taxes = (grossPay-450)*0.25 + 300*0.15 + 150*0.2;
    }

    //calculate the netpay
    netPay = grossPay - taxes;

    //OUTPUT
    printf("The weekly gross pay is: %0.2f$\n", grossPay);
    printf("The taxes you have to pay thyis week is: %0.2f$\n", taxes);
    printf("The netpay you get this week is: %0.2f$\n", netPay);
    return 0;
}
