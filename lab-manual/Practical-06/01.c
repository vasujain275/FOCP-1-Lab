// Write a program to find the factorial of a number using for loop.

#include<stdio.h>

int main(){
    int n, fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = n; i > 0; i--){
        fact *= i;
    }

    printf("Factorial: %d\n", fact);

    return 0;
}