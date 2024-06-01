// Q.1 Write a Program to check whether a number is even or odd using the ternary operator.
#include<stdio.h>

int main(){

    int n  , k;

    printf("Enter any number ");
    scanf("%d", &n);

     k = (n % 2 == 0) ? printf("%d is Even number ", n):  printf("%d is Odd number ", n); 

    

    return 0;

}