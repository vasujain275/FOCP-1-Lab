// Write a program in C to print the table of a given number which is multiplied from 1 to 10 using for loop

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}