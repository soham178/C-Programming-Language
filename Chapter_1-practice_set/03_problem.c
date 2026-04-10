/* Write a program to convert celsius (centrigrate degrees temperature to fahrenheit.)*/

#include<stdio.h>

int main(){
    float c = 37.0;
    float f;

    f = (9.0/5.0)*c + 32;
    printf("The value in fahrenheit is %f", f);
    return 0;
} 