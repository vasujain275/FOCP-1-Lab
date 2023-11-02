//Program to print the sum of 10 natural numbers using while loop

#include<stdio.h>

int main(){
    int i = 1, sum = 0;
    while(i <= 10){
        sum += i;
        i++;
    }
    printf("Sum: %d\n", sum);
    return 0;
}