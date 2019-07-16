#include <stdio.h>

double metre2feet(double a);
double gram2pound(double a);
double cel2faren(double a);

int main(void){
    int nLines;
    double value; 
    char letter;
    double converted;
    
    scanf("%d", &nLines);
    
    for (int i =0; i<nLines; i++){
        double value; 
        char letter;
        double converted;
        
        scanf("%lf %c", &value, letter);
         
         if(letter == 'm'){
             converted = metre2feet(value);
             printf("%f ft\n", converted);
         }
         else if(letter == 'g'){
             converted = gram2pound(value);
             printf("%f lbs\n", converted);
         }
         else if(letter == 'c'){
             converted = cel2faren(value);
            printf("%f f\n", converted);
         }
    
    }
    return 0;
}
double metre2feet(double a){
    double b;
    b = a * 3.2808;
    return b;
}
double gram2pound(double a){
    double b;
    b = a * 0.002205;
    return b;
}
double cel2faren(double a){
    double b;
    b = 32 + 1.8 * a;
    return b;
}