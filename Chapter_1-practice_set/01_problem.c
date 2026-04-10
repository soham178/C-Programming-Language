/*
Write a C program to calculate area of a rectangular:
    a. Using hard coded inputs.
    b. using inputs supplies by the user.
*/

#include<stdio.h>

int main(){
    // int length = 3;
    // int breadth = 6;
    int length, breadth;
    printf("Enter length:\n");
    scanf("%d", &length);

    printf("Enter breadth:\n");
    scanf("%d", &breadth);

    printf("The area of the this rectangular is %d", length*breadth);
    return 0;
}