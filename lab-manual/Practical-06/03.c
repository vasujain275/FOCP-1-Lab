// Write a program to print the following pattern
// The program does not take any input. 
// 55555
// 4444
// 333
// 22
// 1

#include<stdio.h>

int main(){
    int n = 5;
    for(int i = n; i > 0; i--){
        for(int j = 1; j <= i; j++){
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}