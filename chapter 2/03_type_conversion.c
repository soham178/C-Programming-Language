#include<stdio.h>

int main(){
    float a = 9.0;
    int b = 2;
    float c = 9/2;
    int d = 6.7;
    printf("The value od a/b is %f", c);
    printf("The value od d is %f", d); // result is 6 not 6.7
    return 0;
} 

/*
Q. int k = 3.0/9; value of k? and why?

A. 3.0/9 = 0.333, But since k is an int, it cannot store floats & value 0.33 is denoted to 0.
*/

/*
priority      opertators
1st             * / %   (follows left to right associativity)
2nd             + -
3rd             =

ex:- 3*x - 8*y = (3x)-(8y)
*/