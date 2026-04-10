#include<stdio.h>

int main(){
    int a = 4;
    int b = 3;
    int c = a + b;
    printf("The value of a is %d and value of b is %d and sum of a and b is %d\n", a, b, c);
    printf("");

    // Modulus operator is used to get the reminder
    printf("The remainder when a is divided by b is: %d\n", a%b);

    // this does not work for exponentiation in c
    // int d =a^b;
    
    return 0;
} 